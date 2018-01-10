 while (scanf("%s", num) != EOF) {
        switch (num[0]) {
            case '-':
                sum &= ~get_char_num(num[1]);
                break;
            case '+':
                sum |= get_char_num(num[1]);
                break;
            default:
                printf("ERROR");
        }
    }
