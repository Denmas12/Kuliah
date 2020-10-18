#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, hari, gaji_pokok, istri=1, anak, thr, pajak, transport, asuransi=20000, tunjangan, tunjangan_anak;
    printf("Gaji = ");scanf("%d",&gaji_pokok);
    printf("Hari Kerja = ");scanf("%d", &hari);
    printf("Jumlah Anak = ");scanf("%d", &anak);
    tunjangan = gaji_pokok * 0.1;
    tunjangan_anak = (gaji_pokok * 0.05) * anak;
    thr = 13.69 * hari;
    pajak = 0.15*(gaji_pokok + tunjangan + tunjangan_anak);
    transport = 3000*hari;
    total = gaji_pokok+tunjangan+tunjangan_anak+thr+transport-pajak-asuransi;
    printf("Tunjangan suami/istri %d dan tunjangan anak %d\n",tunjangan, tunjangan_anak);
    printf("THR = %d\n", thr);
    printf("Pajak = %d\n",pajak);
    printf("Bantuan transport = %d\n",transport);
    printf("Total Pendapatan adalah %d\n", total);
    return 0;
}
