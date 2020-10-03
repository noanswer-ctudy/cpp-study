## github

+ git ?
  + 버전관리 소프트웨어
  + 내컴퓨터에 있는 저장소

+ github ?
  + 온라인에 있는 깃 저장소 : 협업에 용이

#### 사용해보기

+ git bash

+ pwd : 현재 위치

+ mkdir 폴더 이름

+ ls: 파일

+ cd 폴더이름

+ git init : git 저장소 만들기 (local)

+ git status : 깃 저장소 확인

+ ls - a: 숨김파일

+ ls -l : 리스트

+ ls - la : 리스트에 숨김파일

+ echo "aaa" : aaa를 한번 말한다?

+ echo "aaa" > aaa.txt : aaa.txt에 aaa를 넣는다.

+ git status : git에 

+ commit 하는 법

  + git config --global --edit
  + git add . : 현재 디렉토리에 있는 전체 다 
  + git status 
  + git commit -m "my commit"
  + git status 
  + git log : 버전 확인
    + 예쁘게 보기
    + git log --all --decorate --oneline --graph
      + 커밋번호 / 커밋 메세지/ HEAD->MASTER 두 번째 커밋 
      + head -> master를 가리킴 -> 두 번째 커밋을 가리킴
      + q로 나가기
  + git branch
    + 여러가지 버전으로 분리하여 효율적으로 관리하기 위함
  + cat aaa.txt : 불러옴

+ git checkout HEAD^ : 하나의 전으로 본다.

+ git checkout master : 마스터로 간다.

+ git reset HEAD^ : 마스터와 함께 전으로 가서 원래 있던 것은 연결이 끊긴다.

  + 계속 하드는 연동되는 것을 확인할 수 있다.
  + 메모를 전으로 가고 싶은 경우
  + 파일을 완전히 날리고 싶은 경우 : git reset HEAD --hard

+ git clone http:://~~

  