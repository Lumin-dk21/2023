int main() {
    char str[100];
    char substr[100];
    int count;

    printf("������� �����������: ");
    fgets(str, 100, stdin);

    printf("������� ������� ������������������ ��������: ");
    fgets(substr, 100, stdin);

    // ������� ������ ����� ������ �� ��������� �����
    str[strlen(str)-1] = '\0';
    substr[strlen(substr)-1] = '\0';

    count = countSubstring(str, substr);
    printf("���������� ���������: %d\n", count);

    return 0;
}
