let first = document.getElementById("firstNum");
let second = document.getElementById("secondNum");
function add(){
    let result =parseInt(first.value) + parseInt(second.value);
    document.getElementById("result").innerHTML = result;
}
function sub(){
    let result = parseInt(first.value) - parseInt(second.value);
    document.getElementById("result").innerHTML = result;
