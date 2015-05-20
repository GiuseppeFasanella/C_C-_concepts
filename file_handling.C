// root -l plotter_smearing.C                                                                                                                                           

plotter_smearing(){
  ifstream infile;
  //infile.open("tmp/Smearing.txt");                                                                                                                                            
  infile.open("tmp/Smearing_afterFullProcedure.txt");

  TH1F* gauss=new TH1F("gauss","gauss",100,-3,3);

  double g=0;

  if (infile.is_open())
    {
    cout<<"File aperto"<<endl;
      while ( infile.good() )
        {
          infile>>g;
          gauss->Fill(g);
        }
      infile.close();
    }



   gauss->Draw();
   infile.close();

}

//Scrivere su file
#include <fstream> 
std::ofstream ofs ("test.txt", std::ofstream::out);
ofs << "lorem ipsum";
ofs.close();

//in inputFile open for reading: the internal stream buffer supports input operations.
//out* outputFile open for writing: the internal stream buffer supports output operations.
//binary binaryOperations are performed in binary mode rather than text.
//ate   at endThe output position starts at the end of the file.
//app   appendAll output operations happen at the end of the file, appending to its existing contents.
//trunc truncateAny contents that existed in the file before it is open are discarded.


