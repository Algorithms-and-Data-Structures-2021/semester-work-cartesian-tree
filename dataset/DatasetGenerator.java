package com.company.Others;

import javafx.scene.effect.Reflection;

import java.io.*;

public class DatasetGenerator {

    public static void main(String[] args) throws Exception {
    /*





ВАЖНО!!! ПОМЕНЯТЬ ПУТЬ ДЛЯ СВОЕЙ ОС!!
ВАЖНО!!! ПОМЕНЯТЬ ПУТЬ ДЛЯ СВОЕЙ ОС!!
ВАЖНО!!! ПОМЕНЯТЬ ПУТЬ ДЛЯ СВОЕЙ ОС!!







*/

//String[] name={"/insert","/search","/split","/merge","/erase"};
//String path="/Users/user/CLionProjects/semester-work-cartesian-treeh/dataset/data";
// path=path+"/data";
String[] name={"\\insert","\\search","\\split","\\merge","\\erase"};
String[] name2={"\\pack1","\\pack2","\\pack3","\\pack4","\\pack5","\\pack6","\\pack7","\\pack8","\\pack9","\\pack10"};
String path="H:\\Загрузки\\javatest1-master\\src\\com\\company\\Graph11\\Graph\\src\\com\\company";
path=path+"\\data";

 File file= new File(path);
 file.mkdir();


 int h=0;

        for (int i = 0; i < name.length ; i++) {

            File dir1= new File(path+name[i]);
            dir1.mkdir();
            String path2= dir1.getAbsolutePath();
            for (int j = 0; j < name2.length ; j++) {
                File dir2= new File(path2+name2[j]);
                System.out.println(dir2.getAbsolutePath());
                dir2.mkdir();

                pack01(path + name[i]+name2[j]);
                pack02(path + name[i]+name2[j]);
                pack03(path + name[i]+name2[j]);
                pack04(path + name[i]+name2[j]);
                pack05(path + name[i]+name2[j]);
                pack06(path + name[i]+name2[j]);
                pack07(path + name[i]+name2[j]);
                pack08(path + name[i]+name2[j]);
                pack09(path + name[i]+name2[j]);
                pack10(path + name[i]+name2[j]);
                pack11(path + name[i]+name2[j]);
                pack12(path + name[i]+name2[j]);

            }

        }
 //String path="/Users/user/IdeaProjects/Graph56/Graph/src/com/company/Others";
     //File file1= new File(file.getParent()+"\\Result.txt");


       // PrintWriter writer= new PrintWriter(file1);


//        File file= new File(path+"/dataset.csv");
//      file.createNewFile();
//        PrintWriter writer= new PrintWriter(file);
//        System.out.println("hi");
//        writer.println("da");
//        writer.write("hjhj");

    }
    static void pack01(String path) throws Exception{

        File file= new File(path+"\\01.csv");
       // File file= new File(path+"/01.csv");
            file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <100 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }

    static void pack02(String path) throws Exception{
        //File file= new File(path+"\\02.csv");
        File file= new File(path+"/02.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <500 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");


        }
        writer.flush();
        writer.close();

    }
    static void pack03(String path) throws Exception{
       // File file= new File(path+"\\03.csv");
        File file= new File(path+"/03.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <1000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }
    static void pack04(String path) throws Exception{

//        File file= new File(path+"\\04.csv");
        File file= new File(path+"/04.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <5000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }

    static void pack05(String path) throws Exception{
      //  File file= new File(path+"\\05.csv");
        File file= new File(path+"/05.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <1000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }
    static void pack06(String path) throws Exception{
       // File file= new File(path+"\\06.csv");
        File file= new File(path+"/06.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <25000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }
    static void pack07(String path) throws Exception{
       // File file= new File(path+"\\07.csv");
        File file= new File(path+"/07.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <50000 ; i++) {
                writer.write((int) (1+ Math.random()*1000000)+",");


        }
        writer.flush();
        writer.close();

    }
    static void pack08(String path) throws Exception{
       // File file= new File(path+"\\08.csv");
        File file= new File(path+"/08.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <100000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }

    static void pack09(String path) throws Exception{

        //File file= new File(path+"\\09.csv");
        File file= new File(path+"/09.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <500000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }

    static void pack10(String path) throws Exception{
      //  File file= new File(path+"\\10.csv");
        File file= new File(path+"/10.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <1000000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }


    static void pack11(String path) throws Exception{
     //   File file= new File(path+"\\11.csv");
        File file= new File(path+"/11.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <2500000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }

    static void pack12(String path) throws Exception{
       // File file= new File(path+"\\12.csv");
        File file= new File(path+"/12.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <5000000 ; i++) {

                writer.write((int) (1+ Math.random()*1000000)+",");



        }
        writer.flush();
        writer.close();

    }




}
