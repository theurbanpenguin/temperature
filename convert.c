//
// Created by andrew mallett on 05/03/2022.
//

float ctof (long centigrade) {
    float fahrenheit = (( centigrade * 9)/5)+32;
    return fahrenheit;
}

float ftoc (long fahrenheit){
    float centigrade = (fahrenheit - 32) * 5/9;
    return centigrade;
}


