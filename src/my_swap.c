void my_swap (int* a_tmp , int *b_tmp)
{
    int tmp = *a_tmp;
    *a_tmp = *b_tmp;
    *b_tmp = tmp;
}