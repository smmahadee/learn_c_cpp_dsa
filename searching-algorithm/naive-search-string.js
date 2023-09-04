const searchStringNaive = (long, short) => {
  let count = 0;

  for (let i = 0; i < long.length; i++) {
    for (let j = 0; j < short.length; j++) {
      console.log(short[j], long[i]);
      if (short[j] !== long[j + i]) {
        console.log('BREAK');
        break;
      }
      if (j === short.length - 1) count++;
    }
  }

  return count;
};

console.log(searchStringNaive('hello how are you, lol', 'lo'));
