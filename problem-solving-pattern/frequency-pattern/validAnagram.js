// Compare two string and return true if there are exact same quantity of letter ,
// order doesn't matter, otherwise return false

//OUTPUT - ('hello', 'helol') = true

// Expert solution
const validAnagram = (str1, str2) => {
  // if the length of that two string is not equal then return false
  if (str1.length !== str2.length) {
    return false;
  }

  // Initialized object
  const frequency1 = {};

  // Looping first string and fill the object
  for (let el of str1) {
    frequency1[el] = ++frequency1[el] || 1;
  }

  // Looping second string
  for (let el of str2) {
    // If single string is in that object property, then -1 the value of that property
    if (frequency1[el] > 0) {
      --frequency1[el];
    }
    // Else return false
    else {
      return false;
    }

    return true;
  }
};

validAnagram('aweseome', 'asomeewee');
