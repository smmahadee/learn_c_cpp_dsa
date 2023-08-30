// Write a function that takes in a string and return the count of each character from that string

// write a function called charCount that takes a string
const charCount = string => {
  // initialize an empty object called result
  const result = {};
  // loop the string
  for (let el of string) {
    // lower case the string
    el = el.toLowerCase();
    // check if specific str is a letter of number
    if (/[a-z0-9/]/.test(el)) {
      // check is the property is available in result object,
      // if available then increase the value by 1 , or initialize the property by value 1
      result[el] = ++result[el] || 1;
    }
  }

  // return result
  return result;
};

const result = charCount('hello, how are YOU!');
console.log(result);
