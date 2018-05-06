typedef struct{
  char in[20];
}tipoTeste;

typedef struct{
  char i;
  tipoTeste teste[6];
}tipoEntrada;

tipoEntrada entradas[] = {
  'A', "aabaaba$",  //TRUE
       "aabbbaaa$", //FALSE
       "", "", "", "",
  'B', "aabababa$", //TRUE
       "aabaaba$",  //FALSE
       "", "", "", "",
  'C', "aaabcccabc$", //TRUE
       "aaabcabaac$", //FALSE
       "", "", "", "",
  'D', "aabaccb$",  //TRUE
       "aaabbccc$", //FALSE
       "", "", "", "",
  'E', "101011011$", //TRUE
       "10101011$",  //FALSE
       "", "", "", "",
  'F', "abcdc$",  //TRUE
       "baaadc$", //TRUE
       "cddaac$", //TRUE
       "daaacd$", //TRUE
       "addbc$",  //FALSE
       "baad$",   //FALSE

  'G', "abcdc$",  //TRUE
       "baaadc$", //TRUE
       "cddaac$", //TRUE
       "daaacd$", //TRUE
       "addbc$",  //FALSE
       "baad$",   //FALSE

  'H', "aabaababa$", //TRUE
       "aabababa$",  //FALSE
       "aabb$",      //FALSE
       "aabba$",     //FALSE
       "", "",
  'I', "0110111$", //TRUE
       "1000$",    //TRUE
       "000100$",  //FALSE
       "100100$",  //FALSE
       "", "",
  'J', "caacaccac$", //TRUE
       "acacacca$",  //FALSE
       "acacac$",    //FALSE
       "acaca$",     //FALSE
       "", "",
  'K', "aaaabbb$", //TRUE
       "aaabbb$",  //FALSE
       "aaabb$",   //FALSE
       "abbaab$",  //FALSE
       "ba$",      //FALSE
       "",
  'L', "ac$",      //TRUE
       "aabcc$",   //TRUE
       "aaabbbc$", //TRUE
       "cba$",     //FALSE
       "acb$",     //FALSE
       "aaacc$",   //FALSE

  'M', "1011$", //TRUE
       "0100$", //TRUE
       "1001$", //FALSE
       "0110$", //FALSE
       "", "",
  'N', "111101111$", //TRUE
       "11101$",     //TRUE
       "11001$",     //FALSE
       "100001$",    //FALSE
       "", "",
  'P', "11100$",    //TRUE
       "01110111$", //TRUE
       "0001110$",  //TRUE
       "010101$",   //FALSE
       "010100$",   //FALSE
       "10110101$", //FALSE

  'Q', "abcadefi$", //TRUE
       "ae$",       //TRUE
       "fi$",       //TRUE
       "acaei$",    //TRUE
       "afeie$",    //FALSE
       "aea$",      //FALSE
};
