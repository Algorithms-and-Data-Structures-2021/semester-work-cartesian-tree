package com.company;

import java.io.*;

public class DatasetGenerator {

    public static void main(String[] args) throws Exception {
    /*





ВАЖНО!!! ПОМЕНЯТЬ ПУТЬ ДЛЯ СВОЕЙ ОС!!
ВАЖНО!!! ПОМЕНЯТЬ ПУТЬ ДЛЯ СВОЕЙ ОС!!
ВАЖНО!!! ПОМЕНЯТЬ ПУТЬ ДЛЯ СВОЕЙ ОС!!







*/

String[] name={"/insert","/search","/split","/merge","/erase"};
String path="/Users/user/CLionProjects/semester-work-cartesian-treeh/dataset/data";
// path=path+"/data";
//String[] name={"\\insert","\\search","\\split","\\merge","\\erase"};
//String path="H:\\Загрузки\\javatest1-master\\src\\com\\company\\Graph11\\Graph\\src\\com\\company\\Others";
//path=path+"\\data";

// File file= new File(path);
// file.mkdir();


 int h=0;

        for (int i = 0; i < name.length ; i++) {

            File dir1= new File(path+name[i]);
            dir1.mkdir();

            pack01(path+name[i]);
            pack02(path+name[i]);
            pack03(path+name[i]);
            pack04(path+name[i]);
            pack05(path+name[i]);
            pack06(path+name[i]);
            pack07(path+name[i]);
            pack08(path+name[i]);
            pack09(path+name[i]);
            pack10(path+name[i]);
            pack11(path+name[i]);
            pack12(path+name[i]);

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

        //File file= new File(path+"\\01.csv");
        File file= new File(path+"/01.csv");
            file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <10 ; i++) {
            for (int j = 0; j <10 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }

    static void pack02(String path) throws Exception{
        //File file= new File(path+"\\02.csv");
        File file= new File(path+"/02.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <50 ; i++) {
            for (int j = 0; j <10 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }
    static void pack03(String path) throws Exception{
       // File file= new File(path+"\\03.csv");
        File file= new File(path+"/03.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <100 ; i++) {
            for (int j = 0; j <10 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }
    static void pack04(String path) throws Exception{

//        File file= new File(path+"\\04.csv");
        File file= new File(path+"/04.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <50 ; i++) {
            for (int j = 0; j <100 ; j++) {
                writer.write((int) (1+ Math.random()*100)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }

    static void pack05(String path) throws Exception{
      //  File file= new File(path+"\\05.csv");
        File file= new File(path+"/05.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <100 ; i++) {
            for (int j = 0; j <100 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }
    static void pack06(String path) throws Exception{
       // File file= new File(path+"\\06.csv");
        File file= new File(path+"/06.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <100 ; i++) {
            for (int j = 0; j <250 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }
    static void pack07(String path) throws Exception{
       // File file= new File(path+"\\07.csv");
        File file= new File(path+"/07.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <500 ; i++) {
            for (int j = 0; j <100 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }
    static void pack08(String path) throws Exception{
       // File file= new File(path+"\\08.csv");
        File file= new File(path+"/08.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <100 ; i++) {
            for (int j = 0; j <1000 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }

    static void pack09(String path) throws Exception{

        //File file= new File(path+"\\09.csv");
        File file= new File(path+"/09.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <1000 ; i++) {
            for (int j = 0; j <500 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }

    static void pack10(String path) throws Exception{
      //  File file= new File(path+"\\10.csv");
        File file= new File(path+"/10.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <1000 ; i++) {
            for (int j = 0; j <1000 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }


    static void pack11(String path) throws Exception{
     //   File file= new File(path+"\\11.csv");
        File file= new File(path+"/11.csv");
        file.createNewFile();


        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <2500 ; i++) {
            for (int j = 0; j <1000 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }

    static void pack12(String path) throws Exception{
       // File file= new File(path+"\\12.csv");
        File file= new File(path+"/12.csv");
        file.createNewFile();

        FileWriter writer= new FileWriter(file);

        for (int i = 0; i <5000 ; i++) {
            for (int j = 0; j <1000 ; j++) {
                writer.write((int) (1+ Math.random()*300)+",");

            }
            writer.append("\n");
        }
        writer.flush();
        writer.close();

    }




}
