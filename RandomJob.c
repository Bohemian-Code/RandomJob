#include <stdio.h>
#include <stdlib.h>

int main(void){
    char JobList[42] = {
        "히어로", "다크나이트", "팔라딘",                         //모험가 전사
        "아크메이지(불/독)", "아크메이지(썬/콜)", "비숍",          //모험가 마법사
        "보우마스터", "신궁", "패스파인더",                        //모험가 궁수
        "듀얼블레이드", "나이트로드", "섀도어",                    //모험가 도적
        "캐논슈터", "바이퍼", "캡틴",                              //모험가 해적
        "나이트워커", "소울마스터", "플레임위자드", "미하일", "윈드브레이커", "스트라이커",    //시그너스 기사단
        "은월", "메르세데스", "아란", "팬텀", "루미너스", "에반",   //영웅
        "카이저", "엔젤릭버스터", "카데나",                         //노바족
        "데몬어벤져", "데몬슬레이어", "블래스터", "배틀메이지", "와일드헌터", "메카닉", "제논", //레지스탕스
        "아크", "아델", "일리움",                                   //레프족
        "제로", "호영", "키네시스"                                  //단일직업군
        };
        
    int Random = rand() % count(JobList);

    printf("%s직업은 어떤가요?", JobList[Random]);

    return 0;
}
