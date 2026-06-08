import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class gachaSort {

    static boolean isSorted(List<Integer> list) {
        for (int i = 0; i < list.size() - 1; i++) {
            if (list.get(i) > list.get(i + 1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>(Arrays.asList(1, 3, 2, 5, 4, 7, 6, 9, 8, 10));
        long jumlahGacha = 0;

        System.out.println("Array sebelum disort: " + list);

        long waktuMulai = System.nanoTime();

        while (!isSorted(list)) {
            Collections.shuffle(list);
            jumlahGacha++;
        }

        long waktuSelesai = System.nanoTime();
        double durasiMilidetik = (waktuSelesai - waktuMulai) / 1_000_000.0;

        System.out.println("Array setelah disort: " + list);

        System.out.println("\n--- Statistik Gacha ---");
        System.out.println("Total percobaan gacha : " + jumlahGacha + " kali");
        System.out.printf("Waktu eksekusi        : %.4f ms\n", durasiMilidetik);
    }
}
