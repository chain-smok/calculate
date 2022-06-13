class bubble{
static void bubbleUpSort(int[] arr){
    final int N = arr.length;
    int tmp = 0;
    for (int i=0; i < N; i++){
        for (int j=N-1; j >= i+1; j--){
            if (arr[j] < arr[j-1]){
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }
    }

    for (int k =0; k < arr.length; k++){
        System.out.print(arr[k] + " ");
    }
}
    public static void main(String[] args) {
        System.out.println("Bubble Up Sort");
        int[] bUp = {19, 2, 9, 4, 7, 12, 13, 3, 6};
        bubbleUpSort(bUp);
    }
}