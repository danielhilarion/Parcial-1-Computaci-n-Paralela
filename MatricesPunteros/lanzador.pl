#!/usr/bin/perl

$repeticiones = 30;
@ejecutables = ("matrices");
@matrizSize = ("2000");
$path = "/home/diego/MatricesPunteros/";

foreach $exe (@ejecutables) {
    foreach $size (@matrizSize){
        $fichero = "$path"."Soluciones/"."$exe"."-size"."$size";
        #print("$fichero \n");
        for($i = 0; $i<$repeticiones; $i++){
            #print(" $path$exe $size \n");
            system("$path$exe $size >> $fichero")
        }
    }
}

exit(1);