# daily_c
* C언어 작업 관련 테스트, 문제풀이 레파지토리
* 참고 : https://rasino.tistory.com/307

&nbsp;

----

&nbsp;

## 실행 방법
- 빌드
    - 파일 작성 후, ``Ctrl+Alt+C``
    - select the build task to run => 'save and compile for C'로 선택

- 실행 
    - 빌드 후, `Ctrl+Alt+R`


- 모든 설정이 끝난 뒤
    - 빌드와 단축키 설정을 워크스페이스로 저장해 
    - c언어로 작업할 때마다 따로 설정할 필요 없이 워크스페이스 파일을 불러와 작업가능
    - 각 언어별로 작업 폴더를 따로 만들어야함.
    - 방법 :
        - 메뉴 [파일] - [작업 영역을 다른 이름으로 저장](Save WorkSpace As...)
<br>
<br>
-  맨 처음 gcc설치 및 vcode에서 c/c++ 익스텐션 설치 방법, task.json설치 방법은 구글검색해서 따라하면 됩니다.

&nbsp;

----

&nbsp;
 
## 설정 방법

- vscode extention에서 c/c++ (제작자 microsoft)를 인스톨
- c_cpp_properties.json 편집
    ```json
    {
    "configurations": [
            {
                "name": "Win32",
                "includePath": [
                    "${workspaceFolder}/**",
                    "C:/Program Files/mingw64/include"
                ],
                "defines": [
                    "_DEBUG",
                    "UNICODE",
                    "_UNICODE"
                ],
                "compilerPath": "C:/Program Files/mingw64/bin/g++.exe", //내pc에 설치된 경로를 넣어줌
                "cStandard": "c17",
                "cppStandard": "c++17",
                "intelliSenseMode": "windows-gcc-x86"
            }
        ],
        "version": 4
    }
    ````

- 단축키 설정(**아래의 빌드설정을 마친 후에 설정해야함**)
    - 메뉴 [파일] - [기본설정] - [바로 가기 키]
    - ``Ctrl``키 그대로 누른 상태에서 `K, S` 연속으로 누르기
    - [바로가기 키] 메뉴에서 상단 오른쪽에 [바로가기 키 열기(JSON)]아이콘 누르면
    - 'keybindings.json'파일이 뜸
    - 단축키 배열 안에 아래와 같이 추가해줌
    ````json
    //c++ 컴파일
    {
        "key": "ctrl+alt+c",
        "command": "workbench.action.tasks.build"
    },
    //c++ 실행
    {
        "key": "ctrl+alt+r",
        "command": "workbench.action.tasks.test"
    }
    ````
    - 내 json코드
    ````json
    // 키 바인딩을 이 파일에 넣어서 기본값 재정의auto[]
    [
        {
            "key": "ctrl+shift+a",
            "command": "HookyQR.beautify"
        },
        //c++ 컴파일
        {
            "key": "ctrl+alt+c",
            "command": "workbench.action.tasks.build"
        },
        //c++ 실행
        {
            "key": "ctrl+alt+r",
            "command": "workbench.action.tasks.test"
        }
    ]
    ````


- 빌드 설정
    - ``Ctrl+Shift+B`` &nbsp; OR &nbsp; 메뉴[Terminal] - [Configure Default Build Task] 클릭
    - vscode 커맨트창에서 [빌드작업구성] 선택
    - [구성할 작업 선택]이 나오면, [템플릿에서 tasks.json파일 만들기] 선택
    - [작업템플릿]이 나오면, [Others 임의의 외부 명령을 실행하는 예] 선택
    - 그러면 tasks.json파일이 생성됨
    - 아래와 같이 코드를 덮어쓰면 됨.
    - [주의사항] gcc.exe가 있는 경로 내 PC에 맞게 적어주어야함.
    ````json
    {
    "version": "2.0.0",
    "runner": "terminal",
    "type": "shell",
    "echoCommand": true,
    "presentation": {
        "reveal": "always"
    },
    "tasks": [
        {
            "label": "save and compile for C++",
            "command": "g++",
            "args": [
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
            "group": "build",
            "problemMatcher": {
                "fileLocation": [
                    "relative",
                    "${workspaceRoot}"
                ],
                "pattern": {
                    "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning error):\\s+(.*)$",
                    "file": 1,
                    "line": 2,
                    "column": 3,
                    "severity": 4,
                    "message": 5
                }
            }
        },
        {
            "label": "save and compile for C",
            "command": "gcc",
            "args": [
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
            "group": "build",
            "problemMatcher": {
                "fileLocation": [
                    "relative",
                    "${workspaceRoot}"
                ],
                "pattern": {
                    "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning error):\\s+(.*)$",
                    "file": 1,
                    "line": 2,
                    "column": 3,
                    "severity": 4,
                    "message": 5
                }
            }
        },
        {
            "label": "execute",
            "command": "cmd",
            "group": "test",
            "args": [
                "/C",
                "${fileDirname}\\${fileBasenameNoExtension}"
            ]
        },
        {
            "type": "cppbuild",
            "label": "C/C++: gcc.exe 활성 파일 빌드",
            "command": "C:\\Program Files\\mingw64\\bin\\gcc.exe",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": "build",
            "detail": "디버거에서 생성된 작업입니다."
        },
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe 활성 파일 빌드",
            "command": "C:\\Program Files\\mingw64\\bin\\g++.exe",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": "build",
    //            "group": {
    //                "kind": "build",
    //                "isDefault": true
    //            },
                
                "detail": "디버거에서 생성된 작업입니다."
            },
            {
                "type": "cppbuild",
                "label": "C/C++: gcc.exe 활성 파일 빌드",
                "command": "C:\\Program Files\\mingw64\\bin\\gcc.exe",
                "args": [
                    "-g",
                    "${file}",
                    "-o",
                    "${fileDirname}\\${fileBasenameNoExtension}.exe"
                ],
                "options": {
                    "cwd": "${fileDirname}"
                },
                "problemMatcher": [
                    "$gcc"
                ],
                "group": "build",
                
                // "group": {
                //     "kind": "build",
                //     "isDefault": true
                // },

                "detail": "컴파일러: C:\\Program Files\\mingw64\\bin\\gcc.exe"
            }
        ]
    }
    ````

