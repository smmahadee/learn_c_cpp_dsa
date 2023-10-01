const selectionSort = arr => {
  if (arr.length === 0) return null;
  let newArr = [...arr];

  let minNumIdx = 0;
  let curMinIdx = 0;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > arr[i + 1]) {
      curMinIdx = i + 1;
    }
  }

  if (minNumIdx !== curMinIdx) {
    let temp = newArr[curMinIdx];
    newArr[minNumIdx] = temp;
    newArr[curMinIdx] = newArr[minNumIdx];
  }

  return newArr;
};

console.log(selectionSort([19, 4]));
