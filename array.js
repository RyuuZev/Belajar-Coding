const mahasiswaTI = [
    'depin',
    'dhani',
    'adhan',
    'adim',
]

const text = 'Ada ' + mahasiswaTI.length + ' mahasiswa di prodi TI.'; // Output akan menghasilkan jumlah mahasiswa ti dalam array
 
console.log(text);

// Output juga akan manghasilkan apakah ada seseorang dengan nama tertentu dalam array dengan true or false
const hasDepin = mahasiswaTI.includes('depin'); 
console.log('Ada devin?', hasDepin) // bakal true karena ada dalam array

const hasPasya = mahasiswaTI.includes('pasya'); 
console.log('Ada Pasya?', hasPasya); // false karena ga ada


if (mahasiswaTI.includes('depin')) {
    console.log('Ada');
} else {
    console.log('ga ada')
} // bakal true karena ada dalam array

if (mahasiswaTI.includes('pasya')) {
    console.log('Ada');
} else {
    console.log('ga ada')
} // bakal false karena ga ada dalam array

console.log(mahasiswaTI[0]) // log mahasiswa di elemen pertama index 0 yaitu depin
console.log(mahasiswaTI[3]) // log mahasiswa di elemen ke empat index 3 yaitu adim
console.log(mahasiswaTI[mahasiswaTI.length - 1]) // log ambil elemen terakhir yaitu adim

favFood = [
    'bakso',
    'nasi goreng',
    'chicken katsu',
    'rendang',
]

const textFavFood = 'Makanan favoritku kedua adalah ' + favFood[1]

console.log(textFavFood)