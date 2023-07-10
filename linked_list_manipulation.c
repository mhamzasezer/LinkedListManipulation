#include <stdio.h>

struct linked_data
{
	struct linked_data *next;
	int key;
	double data1;
	double data2;
	double data3;
};

void display_list(struct linked_data *);
void add_list(struct linked_data *, int, double, double, double);
void remove_list(struct linked_data *, int);

int main(void)
{
    struct linked_data list_head;
    int c;
    struct linked_data d;
    list_head.next = NULL;

    while (1)
    {
        printf("Select Command [1]display [2]add, [3]remove : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            display_list(&list_head);
            break;
        case 2:
            printf("Input Key, Data1, Data2, Data3 : ");
            scanf("%d,%lf,%lf,%lf", &d.key, &d.data1, &d.data2, &d.data3);
            add_list(&list_head, d.key, d.data1, d.data2, d.data3);
            break;
        case 3:
            printf("Input Delete Key : ");
            scanf("%d", &d.key);
            remove_list(&list_head, d.key);
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}

void display_list(struct linked_data *list_head) {
    struct linked_data *this = list_head->next;
    while (this != NULL) {
        printf("Key: %d, Data1: %.2lf, Data2: %.2lf, Data3: %.2lf\n", this->key, this->data1, this->data2, this->data3);
        this = this->next;
    }
}

void add_list(struct linked_data *list_head, int key, double data1, double data2, double data3) {
    struct linked_data *this = list_head;
    struct linked_data *new_data = malloc(sizeof(struct linked_data));
    new_data->key = key;
    new_data->data1 = data1;
    new_data->data2 = data2;
    new_data->data3 = data3;
    new_data->next = NULL;
    while (this->next != NULL) {
        this = this->next;
    }
    this->next = new_data;
}

void remove_list(struct linked_data *list_head, int key) {
    struct linked_data *this = list_head;
    struct linked_data *prev = NULL;
    while (this != NULL) {
        if (this->key == key) {
            if (prev == NULL) {
                list_head = this->next;
            }
            else {
                prev->next = this->next;
            }
            free(this);
            break;
        }
        prev = this;
        this = this->next;
    }
    if (this == NULL) {
        printf("Key not found in the list\n");
    }
}