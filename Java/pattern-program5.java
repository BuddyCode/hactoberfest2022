class Main {

  public static void main(String args[]) {
    int l = 5;

    for (int r = 1; r <= l; r++) {
      
      for (int c = 1; c < r; c++) {
        System.out.print(" ");
      }
      for (int c = r; c <= l; c++) {
        System.out.print(c + " ");
      }
      System.out.println();
    }

    for (int r = l - 1; r >= 1; r--) {
      
      for (int c = 1; c < r; c++) {
        System.out.print(" ");
      }

      for (int c = r; c <= l; c++) {
        System.out.print(c + " ");
      }
      System.out.println();
    }
  }
}