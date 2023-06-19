#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "animations.h"

int balance; // 잔고 변수 초기화
int power = 0; // 전투력 변수 초기화
Player player; // 플레이어 변수 전역으로 선언

void showMainMenu() {
    // 메인 메뉴 표시
    
    printf("\033[38;5;117m");
    printf("██████████████████████████████████\n");
    printf("███                            ███\n");
    printf("\033[38;5;117m███        \033[37m1. 게임 시작\033[0m        \033[38;5;117m███\n");
    printf("\033[38;5;117m███        \033[37m2. 게임 설명\033[0m        \033[38;5;117m███\n");
    printf("\033[38;5;117m███        \033[37m3. 게임 종료\033[0m        \033[38;5;117m███\n");
    printf("\033[38;5;117m");
    printf("███                            ███\n");
    printf("██████████████████████████████████\n");
    printf("\033[0m");
    printf("메뉴를 선택하세요 : ");
}

void showGameMenu(int balance, int power) {
    // 게임 메뉴 표시
    printf("\033[38;5;117m");
    printf("██████████████████████████████████\n");
    printf("███                            ███\n");
    printf("\033[38;5;117m███        \033[37m1. 씨앗 심기\033[0m        \033[38;5;117m███\n");
    printf("\033[38;5;117m███        \033[37m2. 전투 나가기\033[0m      \033[38;5;117m███\n");
    printf("\033[38;5;117m███        \033[37m3. 전투력 상승\033[0m      \033[38;5;117m███\n");
    printf("\033[38;5;117m███        \033[37m4. 뒤로 가기\033[0m        \033[38;5;117m███\n");
    printf("\033[38;5;117m");
    printf("███                            ███\n");
    printf("██████████████████████████████████\n\n");
    printf("           잔고: %d원          \n", balance);
    printf("           전투력: %d         \n", power);
    printf("██████████████████████████████████\n");
    printf("\033[0m");
    printf("메뉴를 선택하세요 : ");
}

void welcomeAnimation() {
    // 환영 애니메이션
    printf("\n\n\n\n\n\n");
    sleep(1);
    printf("\033[33m");
    printf("!!! 농장을 지켜라 !!!\n\n\n");
    sleep(1); // 1초 동안 대기
    printf("\033[34m");
    printf("게임에 오신것을 환영 합니다.\n\n\n");
    sleep(1);
    printf("\033[35m");
    printf("모든 몬스터들을 처치 해 주세요!\n\n\n");
    printf("\033[0m");
    sleep(1);
}

void gameDescription() {
    // 게임 설명
    printf("\033[32m");
    printf("███████████████████████████████████████████████████████████\n");
    printf("███                                                     ███\n");
    printf("\033[32m███                     \033[37m안녕하세요 ^_^\033[0m                  \033[32m███\n");
    printf("\033[32m███                                                     \033[32m███\n");
    printf("\033[32m███                  \033[37m! 농장을 지켜라 !\033[0m                  \033[32m███\n");
    printf("\033[32m███                                                     \033[32m███\n");
    printf("\033[32m███              \033[37m게임에 오신걸 환영 합니다.\033[0m             \033[32m███\n");
    printf("\033[32m███                  \033[37m게임은 간단 합니다.\033[0m                \033[32m███\n");
    printf("\033[32m███  \033[37m농장에 피해를 주는 몬스터들을 모두 처치 해주세요.\033[0m  \033[32m███\n");
    printf("\033[32m███      \033[37m몬스터를 처치 하려면 전투력이 필요 합니다.\033[0m     \033[32m███\n");
    printf("\033[32m███     \033[37m씨앗을 심어 돈을 벌고 전투력 상승권을 구입후\033[0m    \033[32m███\n");
    printf("\033[32m███      \033[37m전투력을 높혀 모든 몬스터를 처치 해 주세요.\033[0m    \033[32m███\n");
    printf("\033[32m");
    printf("███                                                     ███\n");
    printf("███████████████████████████████████████████████████████████\n");
    printf("\033[0m");
    printf("\n");
}

void gameExit() {
    // 게임 종료
    printf("그럼 안녕히 가세요!\n");
    sleep(1); // 1초 동안 대기
    printf("게임을 종료합니다.\n");
    exit(0); // 프로그램 종료
}

void sowSeeds(int* balance, int* power) {
    SeedAnimation();
    printf("씨앗 심기 성공! 1000원이 추가되었습니다.\n");
    *balance += 1000; // 잔고에 1000원 추가
}

void goToBattle(int power) {
    while (1) {
        // 전투 모드로 이동
        printf("\033[38;5;117m");
        printf("███████████████████████████████████████████████\n");
        printf("███                                         ███\n");
        printf("\033[38;5;117m███  \033[37m1단계 멧비둘기 잡기\033[90m 10 전투력 필요 \033[0m    \033[38;5;117m███\n");
        printf("\033[38;5;117m███  \033[37m2단계 벌레 잡기    \033[90m 30 전투력 필요 \033[0m    \033[38;5;117m███\n");
        printf("\033[38;5;117m███  \033[37m3단계 두더지 잡기  \033[90m 50 전투력 필요 \033[0m    \033[38;5;117m███\n");
        printf("\033[38;5;117m███  \033[37m4단계 멧돼지 잡기  \033[90m 70 전투력 필요 \033[0m    \033[38;5;117m███\n");
        printf("\033[38;5;117m███  \033[37m5단계 쥐 잡기      \033[90m 100 전투력 필요 \033[0m   \033[38;5;117m███\n");
        printf("\033[38;5;117m");
        printf("███                                         ███\n");
        printf("███████████████████████████████████████████████\n");
        printf("\033[0m");
        printf("메뉴를 선택하세요 : ");

        int battleChoice;
        scanf("%d", &battleChoice);

        switch (battleChoice) {
            case 1:
                if (power >= 10) {
                    birdAnimation();
                    printf("멧비둘기를 잡았습니다!\n");
                } else {
                    printf("전투력이 부족하여 이 전투에 참여할 수 없습니다.\n");
                }
                break;
            case 2:
                if (power >= 30) {
                    wormAnimation();
                    printf("벌레를 잡았습니다!\n");
                } else {
                    printf("전투력이 부족하여 이 전투에 참여할 수 없습니다.\n");
                }
                break;
            case 3:
                if (power >= 50) {
                    MoleAnimation();
                    printf("두더지를 잡았습니다!\n");
                } else {
                    printf("전투력이 부족하여 이 전투에 참여할 수 없습니다.\n");
                }
                break;
            case 4:
                if (power >= 70) {
                    BoarAnimation();
                    printf("멧돼지를 잡았습니다!\n");
                } else {
                    printf("전투력이 부족하여 이 전투에 참여할 수 없습니다.\n");
                }
                break;
            case 5:
                if (power >= 100) {
                    ratAnimation();
                    printf("쥐를 잡았습니다!\n");
                } else {
                    printf("전투력이 부족하여 이 전투에 참여할 수 없습니다.\n");
                }
                break;
            default:
                printf("잘못된 메뉴를 선택했습니다. 다시 선택하세요.\n");
                break;
        }
        // 전투 단계가 종료되면 메뉴 선택으로 돌아가기
        if (battleChoice >= 1 && battleChoice <= 5) {
            break;
        }
    }
}

void increasePower(int* balance, int* power) {
    // 전투력 상승 기능
    if (*balance >= 500) {
        *balance -= 500; // 결제금액 500원 차감
        if (*power < 100) {
            *power += 10; // 전투력 10 증가
            if (*power > 100) {
                *power = 100; // 전투력이 최대치인 100을 초과하지 않도록 설정
            }
            printf("전투력을 10 상승시켰습니다.\n");
        } else {
            printf("전투력이 이미 최대치입니다.\n");
        }
    } else {
        printf("잔고가 부족하여 전투력을 상승시킬 수 없습니다.\n");
    }
}

int main() {
    balance = 0; //잔고
    power = 0; //전투력

    while (1) {
        showMainMenu();
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                welcomeAnimation();
                while (1) {
                    showGameMenu(balance, power);
                    scanf("%d", &choice);
                    switch (choice) {
                        case 1:
                            sowSeeds(&balance, &power);
                            break;
                        case 2:
                            goToBattle(power);
                            break;
                        case 3:
                            increasePower(&balance, &power);
                            break;
                        case 4:
                            break;
                        default:
                            printf("잘못된 메뉴를 선택했습니다. 다시 선택하세요.\n");
                            break;
                    }
                    if (choice == 4) {
                        break;
                    }
                }
                break;
            case 2:
                gameDescription();
                break;
            case 3:
                gameExit();
                break;
            default:
                printf("잘못된 메뉴를 선택했습니다. 다시 선택하세요.\n");
                break;
        }
    }

    return 0;
}
