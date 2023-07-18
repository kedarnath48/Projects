let selectOne = document.getElementById('one');
selectOne.onclick = function(){
  document.getElementById('firstinput').innerText += '1';
}

let selectTwo = document.getElementById('two');
selectTwo.onclick = function(){
  document.getElementById('firstinput').innerText += '2';
}

let selectThree = document.getElementById('three');
selectThree.onclick = function(){
  document.getElementById('firstinput').innerText += '3';
}

let selectFour = document.getElementById('four');
selectFour.onclick = function(){
  document.getElementById('firstinput').innerText += '4';
} 

let selectFive = document.getElementById('five');
selectFive.onclick = function(){
  document.getElementById('firstinput').innerText += '5';
} 

let selectSix = document.getElementById('six');
selectSix.onclick = function(){
  document.getElementById('firstinput').innerText += '6';
} 

let selectSeven = document.getElementById('seven');
selectSeven.onclick = function(){
  document.getElementById('firstinput').innerText += '7';
} 

let selectEight = document.getElementById('eight');
selectEight.onclick = function(){
  document.getElementById('firstinput').innerText += '8';
} 

let selectNine = document.getElementById('nine');
selectNine.onclick = function(){
  document.getElementById('firstinput').innerText += '9';
} 

let selectZero = document.getElementById('zero');
selectZero.onclick = function(){
  document.getElementById('firstinput').innerText += '0';
} 

let selectAdd = document.getElementById('add');
selectAdd.onclick = function(){
  document.getElementById('firstinput').innerText += '+';
}

let selectSub = document.getElementById('sub');
selectSub.onclick = function(){
  document.getElementById('firstinput').innerText += '-';
}

let selectMul = document.getElementById('mul');
selectMul.onclick = function(){
  document.getElementById('firstinput').innerText += '*';
}

let selectDiv = document.getElementById('div');
selectDiv.onclick = function(){
  document.getElementById('firstinput').innerText += '/';
}

let selectEqual = document.getElementById('equal');
selectEqual.onclick = function(){
  let x = document.getElementById('firstinput').innerText;
  let result = eval(x);
  document.getElementById('firstinput').innerText = result;
}

let selectReset = document.getElementById('reset');
selectReset.onclick = function(){
  document.getElementById('firstinput').innerText = '';
}

