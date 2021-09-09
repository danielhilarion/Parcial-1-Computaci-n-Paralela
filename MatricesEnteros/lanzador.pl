#!/usr/bin/perl

$repeticiones = 30;
@ejecutables = ("matrices");
@matrizSize = ("50","100","200","300","400","500","600","700","800");
$path = "/home/danielhilarion/Computacion/Parcial1/MatricesEnteros/";

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