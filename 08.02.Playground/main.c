#include <stdio.h>
#include <excpt.h>
#include <stdbool.h>

int
main()
{
    int Robot = 123;
    int* Pointer;

    printf("Robot @ %p\n\n", &Robot);

    while (true)
    {
        __try
        {
            printf("������ָ��>> ");
            scanf_s("%p", &Pointer);

            printf("��ǰֵ��%d\n\n", *Pointer);

            printf("��������ֵ>> ");
            scanf_s("%d", Pointer);

            printf("��ǰֵ��%d\n\n\n", *Pointer);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            printf("�����쳣\n\n\n");
        }
    }
}
