#include <stdio.h>
#include "screen.h"

int showMainMenu();
int showGameMenu();
int sowSeeds();
int goToBattle();
int goToStore();
int showBag();

int main() {
    showMainMenu();

    return 0;
}

int showMainMenu() {
    while (1) {
        // 첫 번째 줄 출력
        printHorizontalLine(31);

        // 네모 박스 내부 출력
        char* mainMenuLines[] = {
            "1. 게임 시작 ",
            "2. 게임 설명 ",
            "3. 게임 종료 "
        };
        printInnerBox(mainMenuLines, sizeof(mainMenuLines) / sizeof(mainMenuLines[0]));

        // 중간 줄 출력
        printHorizontalLine(31);

        int menuSelection;
        printf("메뉴를 선택하세요: ");
        scanf("%d", &menuSelection);

        if (menuSelection == 1) {
            showGameMenu();
        } else if (menuSelection == 2) {
            printf("안녕하세요.\n");
            printf("1. 뒤로 가기\n");
            scanf("%d", &menuSelection);
            if (menuSelection == 1) {
                continue;
            } else {
                printf("잘못된 입력입니다.\n");
                continue;
            }
        } else if (menuSelection == 3) {
            printf("게임을 종료합니다.\n");
            break;
        } else {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }

    return 0;
}

int showGameMenu() {
    while (1) {
        // 첫 번째 줄 출력
        printHorizontalLine(31);

        // 네모 박스 내부 출력
        char* gameMenuLines[] = {
            "1. 씨앗 심기 ",
            "2. 전투 나가기 ",
            "3. 상점 가기 ",
            "4. 가방 보기 ",
            "5. 뒤로 가기 "
        };
        printInnerBox(gameMenuLines, sizeof(gameMenuLines) / sizeof(gameMenuLines[0]));

        // 중간 줄 출력
        printHorizontalLine(31);

        int menuSelection;
        printf("메뉴를 선택하세요: ");
        scanf("%d", &menuSelection);

        if (menuSelection == 1) {
            sowSeeds();
        } else if (menuSelection == 2) {
            goToBattle();
        } else if (menuSelection == 3) {
            goToStore();
        } else if (menuSelection == 4) {
            showBag();
        } else if (menuSelection == 5) {
            break;
        } else {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }

    return 0;
}

int sowSeeds() {
    while (1) {
        // 첫 번째 줄 출력
        printHorizontalLine(31);

        // 네모 박스 내부 출력
        char* sowSeedsLines[] = {
            "1. 벼 ",
            "2. 옥수수 ",
            "3. 고구마 ",
            "4. 배추 ",
            "5. 호박 ",
            "6. 뒤로 가기 "
        };
        printInnerBox(sowSeedsLines, sizeof(sowSeedsLines) / sizeof(sowSeedsLines[0]));

        // 중간 줄 출력
        printHorizontalLine(31);

        int menuSelection;
        printf("메뉴를 선택하세요: ");
        scanf("%d", &menuSelection);

        if (menuSelection >= 1 && menuSelection <= 5) {
            // TODO: 선택된 작물에 따라 작물을 심는 동작 수행
            printf("작물을 심습니다.\n");
            break;
        } else if (menuSelection == 6) {
            break;
        } else {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }

    return 0;
}

int goToBattle() {
    while (1) {
        // 첫 번째 줄 출력
        printHorizontalLine(31);

        // 네모 박스 내부 출력
        char* goToBattleLines[] = {
            "1. 벼멸구 잡기 ",
            "2. 조명나방 잡기 ",
            "3. 고구마바구미 잡기 ",
            "4. 배추좀나방 잡기 ",
            "5. 작은뿌리파리 잡기 ",
            "6. 뒤로 가기 "
        };
        printInnerBox(goToBattleLines, sizeof(goToBattleLines) / sizeof(goToBattleLines[0]));

        // 중간 줄 출력
        printHorizontalLine(31);

        int menuSelection;
        printf("메뉴를 선택하세요: ");
        scanf("%d", &menuSelection);

        if (menuSelection >= 1 && menuSelection <= 5) {
            // TODO: 선택된 적과 전투를 시작하는 동작 수행
            printf("전투를 시작합니다.\n");
            break;
        } else if (menuSelection == 6) {
            break;
        } else {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }

    return 0;
}

int goToStore() {
    while (1) {
        // 첫 번째 줄 출력
        printHorizontalLine(31);

        // 네모 박스 내부 출력
        char* goToStoreLines[] = {
            "1. 밭 구매하기 ",
            "2. 전투력 상승 ",
            "3. 작물 판매하기 ",
            "4. 뒤로 가기 "
        };
        printInnerBox(goToStoreLines, sizeof(goToStoreLines) / sizeof(goToStoreLines[0]));

        // 중간 줄 출력
        printHorizontalLine(31);

        int menuSelection;
        printf("메뉴를 선택하세요: ");
        scanf("%d", &menuSelection);

        if (menuSelection == 1) {
            // TODO: 밭 구매 기능 수행
            printf("밭을 구매합니다.\n");
            break;
        } else if (menuSelection == 2) {
            // TODO: 전투력 상승 기능 수행
            printf("전투력이 상승합니다.\n");
            break;
        } else if (menuSelection == 3) {
            // TODO: 작물 판매 기능 수행
            printf("작물을 판매합니다.\n");
            break;
        } else if (menuSelection == 4) {
            break;
        } else {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }

    return 0;
}

int showBag() {
    // 첫 번째 줄 출력
    printHorizontalLine(31);

    // 네모 박스 내부 출력
    char* showBagLines[] = {
        "▶ 밭: ",
        "▶ 잔고: ",
        "▶ 전투력: ",
        "▶ 보유작물: "
    };
    printInnerBox(showBagLines, sizeof(showBagLines) / sizeof(showBagLines[0]));

    // 중간 줄 출력
    printHorizontalLine(31);

    return 0;
}
