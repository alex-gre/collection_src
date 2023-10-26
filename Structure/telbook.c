#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15

// Структура для хранения контакта
typedef struct {
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
} Contact;

// Функция сортировки контактов по имени
void sortContacts(Contact* contacts, int numContacts) {
    int i, j;
    Contact temp;

    for (i = 0; i < numContacts - 1; i++) {
        for (j = 0; j < numContacts - i - 1; j++) {
            if (strcmp(contacts[j].name, contacts[j + 1].name) > 0) {
                temp = contacts[j];
                contacts[j] = contacts[j + 1];
                contacts[j + 1] = temp;
            }
        }
    }
}

// Функция для вывода контактов в консоль
void printContacts(Contact* contacts, int numContacts) {
    int i;

    for (i = 0; i < numContacts; i++) {
        printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
    }
}

// Функция для сохранения контактов в файл
void saveContacts(Contact* contacts, int numContacts) {
    FILE* file = fopen("contacts.txt", "w");
    int i;

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (i = 0; i < numContacts; i++) {
        fprintf(file, "%s,%s\n", contacts[i].name, contacts[i].phone);
    }

    fclose(file);
}

int main() {
    int numContacts, i;
    printf("Enter the number of contacts: ");
    scanf("%d", &numContacts);

    // Выделение памяти для массива контактов
    Contact* contacts = (Contact*)malloc(numContacts * sizeof(Contact));

    // Заполнение массива контактов данными, введенными пользователем
    for (i = 0; i < numContacts; i++) {
        printf("Enter contact %d name: ", i + 1);
        scanf("%s", contacts[i].name);
        printf("Enter contact %d phone: ", i + 1);
        scanf("%s", contacts[i].phone);
    }

    // Сортировка контактов по имени
    sortContacts(contacts, numContacts);

    printf("\nSorted Contacts:\n");
    // Вывод контактов в консоль
    printContacts(contacts, numContacts);

    // Сохранение контактов в файл
    saveContacts(contacts, numContacts);

    // Освобождение памяти
    free(contacts);

    return 0;
}
