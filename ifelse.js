let angka = 5;

if (angka >= 1000) {
    console.log(`ribuan`);
} else if (angka >= 100) {
    console.log(`ratusan`);
} else if (angka >= 10) {
    console.log(`puluhan`);
} else if (angka > 0 && angka < 10) {
    console.log(`satuan`);
} else if (angka == 0) {
    console.log(`Angka Nol`);
} else if (angka < 0) {
    console.log(`Angka negatif`);
} else {
    console.log(`ga valid`);
}


// versi dari satuan

let angkah = 100;

if (angkah < 10) {
    console.log(`satuan`);
} else if (angkah < 100) {
    console.log(`puluhan`);
} else if (angkah < 1000) {
    console.log(`ratusan`);
} else {
    console.log(`ribuan`);
}