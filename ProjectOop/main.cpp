#include<bits/stdc++.h>
#include<conio.h>


using namespace std;

//file.close();
//ifstream fil("admin.txt",ios::in)




//int Administrator::contorId = 0;

class taxe
{
public:
    virtual void afis(){cout<<"Client ";}
    virtual void calcTaxe()=0;
};

class Client : public taxe
{
    string nume; //
    string prenume; //
    char initialaTata; //
    string username;  //
    string  password; //
    struct card
    {
        int* numereFata;
        string * numeIntreg; //
        string dataExp; //
        int numereMagice; //
        float sumaCard; //
    }crd;
    //bool areMas;
    //int nrZile;
protected:
    int taxaPeZi =10;

public:


    friend istream& operator>>(istream& in, Client& cli)
    {
        int i;
        cout<<endl<<"nume : ";
        in>>cli.nume;

        cout<<endl<<"prenume : ";
        in>>cli.prenume;

        cout<<endl<<"initala tata : ";
        in>>cli.initialaTata;

        cout<<endl<<"username : ";
        in>>cli.username;

        cout<<endl<<"password : ";
        in>>cli.password;

        cout<<endl<<"card : ";

        //char ch ;
        if (cli.crd.numereFata != NULL)
            delete[] cli.crd.numereFata;
        cli.crd.numereFata = new int[4];
        cout<<endl<<"nr fata : ";
        for(i=0;i<4;i++)
         {
            in>>cli.crd.numereFata[i];
            //ch = getch();
            //cout<<ch;
            //if((i+1) % 4 == 0)
                //cout<<" ";
            //cli.crd.numereFata[i]=ch - '0';
         }

        if (cli.crd.numeIntreg != NULL)
            delete[] cli.crd.numeIntreg;
        cli.crd.numeIntreg = new string[2];
        cout<<endl<<"nume intreg : ";
        for(i=0;i<2;i++)
            in>>cli.crd.numeIntreg[i];

        cout<<endl<<"data exp : ";
        in>>cli.crd.dataExp;

        cout<<endl<<"nmr magice : ";
        in>>cli.crd.numereMagice;

        cout<<endl<<"suma : ";
        in>>cli.crd.sumaCard;


        return in;

    }

    friend ostream& operator<<(ostream& out, const Client& cli)
    {
        //int i;

        out<<endl<<"nume : "<<cli.nume;


        out<<endl<<"prenume : "<<cli.prenume;

        out<<endl<<"initala tata : "<<cli.initialaTata;


        out<<endl<<"username : "<<cli.username;


        out<<endl<<"password : "<<cli.password;


        out<<endl<<"card : ";
        out<<endl<<"numere fata: ";
        if(cli.crd.numereFata != NULL)
        {
            for(int i=0;i<4;i++)
                out<<cli.crd.numereFata[i]<<" ";
        }
       // out<<endl<<"nr fata ";
      //  for(int i=0;i<16;i++)
         //   out<<adm.crd.numereFata[i];
       // out<<endl<<"nr fata : ";
      //  out<<adm.crd.numereFata;
      out<<endl<<"nume : ";
      if(cli.crd.numeIntreg != NULL)
      {
          for(int i=0;i<2;i++)
            out<<cli.crd.numeIntreg[i]<<" ";
      }
      //  out<<endl<<"nume ";
       // for(int i=0;i<2;i++)
         //   out<<adm.crd.numeIntreg[i]<<" ";

        //out<<adm.crd.numeIntreg;

        out<<endl<<"data exp : "<<cli.crd.dataExp;


        out<<endl<<"nmr magice : "<<cli.crd.numereMagice;


        out<<endl<<"suma : "<<cli.crd.sumaCard;




        return out;
    }

    void setTaxaPeZi (int taxaPeZi)
    {
        this-> taxaPeZi = taxaPeZi;
    }
    int getTaxaPeZi ()
    {
        return this -> taxaPeZi;
    }

    void setUsename( string username)
    {
        this-> username = username;
    }
    string getUsername ()
    {
        return this-> username;
    }

    void setPassword (string password)
    {
        this -> password = password;
    }

    string getPassword()
    {
        return this-> password;;
    }



    void setNume (string nume)
    {
        this-> nume = nume;
    }
    string getNume()
    {
        return this->nume;
    }

    void setPrenume(string prenume)
    {
        this->prenume = prenume;
    }

    string getPrenume()
    {
        return this->prenume;
    }

    void setInitialaTata(char initialaTata)
    {
        this-> initialaTata = initialaTata;
    }
    char getInitialaTata ()
    {
        return this->initialaTata;
    }

    void setNumereFata(int * numereFata)
    {
        if(this->crd.numereFata != NULL)
            delete[] crd.numereFata;
        this->crd.numereFata = new int[4*4];
        for (int i=0;i<4*4;i++)
            this->crd.numereFata[i] = numereFata[i];
    }

    int * getNumereFata()
    {
        return this-> crd.numereFata;
    }

    void setNumeIntreg (string * numeIntreg)
    {
        if (this-> crd.numeIntreg != NULL)
            delete[] this-> crd.numeIntreg;
        for(int i=0;i<=1;i++)
            this-> crd.numeIntreg[i] = numeIntreg[i];
    }
    string * getNumeIntreg ()
    {
        return this-> crd.numeIntreg;
    }

    void setDataExp (string dataExp)
    {
        this-> crd.dataExp = dataExp;
    }

    string getDataExp ()
    {
        return this-> crd.dataExp;
    }

    void setNunereMagice (int numereMagice)
    {
        this-> crd.numereMagice = numereMagice;
    }


    int getNumereMagice ()
    {
        return this-> crd.numereMagice;
    }

    void setSumaCard (float sumaCard)
    {
        this-> crd.sumaCard = sumaCard;
    }

    float getSumaCard ()
    {
        return this-> crd.sumaCard;
    }




    Client(string nume, string prenume, char initialaTata, string username, string password, int * numereFata, string * numeIntreg, string dataExp, int numereMagice, float sumaCard)
    {
        this -> nume = nume;

        this -> prenume = prenume;

        this -> initialaTata = initialaTata;

        this-> username = username;

        this -> password = password;

        this -> crd.numereFata = new int[4];
        for(int i=0;i<4;i++)
        {
            this-> crd.numereFata[i] = numereFata[i];
        }

        this -> crd.numeIntreg = new string[2];
        for(int i=0;i<2;i++)
        {
            this -> crd.numeIntreg[i] = numeIntreg[i];
        }

        this-> crd.dataExp = dataExp;

        this-> crd.numereMagice = numereMagice;

        this-> crd.sumaCard = sumaCard;

        this -> taxaPeZi = 10;
    }

    Client& operator=(const Client& cli)
    {
        if(this!= &cli)
        {
            this -> nume = cli.nume;
            this -> prenume = cli.prenume;

            this -> initialaTata = cli.initialaTata;

            this-> username = cli.username;

            this -> password = cli.password;

            if(this->crd.numereFata != NULL)
                delete[] this-> crd.numereFata;
            this -> crd.numereFata = new int[4];
            for(int i=0;i<4;i++)
            {
                this-> crd.numereFata[i] = cli.crd.numereFata[i];
            }

            if(this->crd.numeIntreg != NULL)
                delete[] this-> crd.numeIntreg;
            this -> crd.numeIntreg = new string[2];
            for(int i=0;i<2;i++)
            {
                this -> crd.numeIntreg[i] = cli.crd.numeIntreg[i];
            }

            this-> crd.dataExp = cli.crd.dataExp;

            this-> crd.numereMagice = cli.crd.numereMagice;

            this-> crd.sumaCard = cli.crd.sumaCard;

            this -> taxaPeZi = cli.taxaPeZi;
        }

        *this;
    }


    Client(const Client& cli)//:idAdministrator(adm.idAdministrator)
    {
            this -> nume = cli.nume;

            this -> prenume = cli.prenume;

            this -> initialaTata = cli.initialaTata;

            this-> username = cli.username;

            this -> password = cli.password;

            //if(this->crd.numereFata != NULL)
               // delete[] this-> crd.numereFata;
            this -> crd.numereFata = new int[4];
            for(int i=0;i<4;i++)
            {
                this-> crd.numereFata[i] = cli.crd.numereFata[i];
            }

            //if(this->crd.numeIntreg != NULL)
              //  delete[] this-> crd.numeIntreg;
            this -> crd.numeIntreg = new string[2];
            for(int i=0;i<2;i++)
            {
                this -> crd.numeIntreg[i] = cli.crd.numeIntreg[i];
            }

            this-> crd.dataExp = cli.crd.dataExp;

            this-> crd.numereMagice = cli.crd.numereMagice;

            this-> crd.sumaCard = cli.crd.sumaCard;

            this -> taxaPeZi = cli.taxaPeZi;
    }


    Client(string username, string password, string nume)
    {
        this-> username = username;

        this -> password = password;





        this -> nume = nume;

        this->prenume = "-";

        this-> initialaTata = 'w';


        this->crd.numereFata = NULL;



        this-> crd.numeIntreg = NULL;



        this-> crd.dataExp = "-";


        this-> crd.numereMagice = 0;


        this-> crd.sumaCard = 0;

        this -> taxaPeZi = 10;
    }

    Client()
    {
        this-> username = "-";

        this -> password = "-";



        this -> nume = "Anon";

        this->prenume = "-";

        this-> initialaTata = 'w';


        this->crd.numereFata = NULL;



        this-> crd.numeIntreg = NULL;



        this-> crd.dataExp = "-";


        this-> crd.numereMagice = 0;


        this-> crd.sumaCard = 0;

        this -> taxaPeZi = 10;
    }

    bool lgin(string username, string password)
    {
        if(this-> username == username  && this-> password == password)
            return true;
        else
            return false;
    }

    void vreauBani (float cat)
    {
        this -> crd.sumaCard += cat;
    }

    ~Client()
    {
        if(this->crd.numereFata != NULL)
            delete crd.numereFata;
        if (this-> crd.numeIntreg != NULL)
            delete[] this-> crd.numeIntreg;
    }

    virtual float calcPretClientOG()=0;
};

class ClientOG : public Client
{
    string grad;
public:
    void afis(){cout<<"ClientOG ";}
    friend istream& operator>>(istream& in,ClientOG& c)
    {
        in>>(Client&) c;
        cout<<"\nGrad: ";
        in>>c.grad;

        return in;
    }

    string getGrad()
    {
        return this-> grad;
    }
    friend ostream& operator<<(ostream& out,const ClientOG& c)
    {
        out<<(Client&) c;
        out<<"\nGrad: "<<c.grad;

        return out;
    }

    ClientOG& operator=(const ClientOG& c)
    {
        if(this != &c)
        {
            Client::operator=(c);
            this->grad = c.grad;
        }
        return *this;
    }
    ClientOG(const ClientOG& c):Client(c)
    {
        this-> grad = c.grad;
    }
    ClientOG():Client()
    {
        this-> grad = "-";
    }
    ClientOG(string username, string password, string nume,string grad):Client( username, password, nume)
    {
        this-> grad = grad;
    }
    ClientOG( string nume, string prenume, char initialaTata, string username, string password, int * numereFata, string * numeIntreg, string dataExp, int numereMagice, float sumaCard, string grad):Client( nume, prenume, initialaTata, username, password, numereFata, numeIntreg, dataExp, numereMagice, sumaCard)
    {
        this-> grad = grad;
    }

    float calcPretClientOG()
    {
        return this-> taxaPeZi + this-> taxaPeZi *10/100;
    }

    void calcTaxe()
    {
        cout<<"taxa pe zi:"<< this-> taxaPeZi<<"  ";
        cout<<"adaos pe zi:"<< this-> taxaPeZi *10/100;
    }
    ~ClientOG()
    {

    }
} ;


class ClientNormal : public Client
{
    int ani;
public:
    void afis(){cout<<"ClientNormal ";}
    friend istream& operator>>(istream& in,ClientNormal& c)
    {
        in>>(Client&) c;
        cout<<"\nani: ";
        in>>c.ani;

        return in;
    }

    int getAni ()
    {
        return this-> ani;
    }

    friend ostream& operator<<(ostream& out,const ClientNormal& c)
    {
        out<<(Client&) c;
        out<<"\nani: "<<c.ani;

        return out;
    }

    ClientNormal& operator=(const ClientNormal& c)
    {
        if(this != &c)
        {
            Client::operator=(c);
            this->ani = c.ani;
        }
        return *this;
    }
    ClientNormal(const ClientNormal& c):Client(c)
    {
        this-> ani = c.ani;
    }
    ClientNormal():Client()
    {
        this-> ani = 0;
    }
    ClientNormal(string username, string password, string nume,int ani):Client( username, password, nume)
    {
        this-> ani = ani;
    }
    ClientNormal( string nume, string prenume, char initialaTata, string username, string password, int * numereFata, string * numeIntreg, string dataExp, int numereMagice, float sumaCard, int ani):Client( nume, prenume, initialaTata, username, password, numereFata, numeIntreg, dataExp, numereMagice, sumaCard)
    {
        this-> ani = ani;
    }

    float calcPretClientOG()
    {
        return this-> taxaPeZi + this-> taxaPeZi *20/100;
    }

    void calcTaxe()
    {
        cout<<"taxa pe zi:"<< this-> taxaPeZi<<"  ";
        cout<<"adaos pe zi :"<< this-> taxaPeZi *20/100;
    }

} ;



class Masina
{

    //const int idMasina;
    string nrMatricul;
    string firma; //
    string model;
    float pretZi;
    bool disponibila; //
    int nrReview; //
    float * reviewMasina; //
    double pretMasina; //

protected:
    int inCeGaraj;

public:
    //static int contorIdM;

    friend istream& operator>>(istream& in, Masina& mas)
    {
        cout<<endl<<"nrMatr : ";
        in>>mas.nrMatricul;

        cout<<endl<<"firma : ";
        in>>mas.firma;

        cout<<endl<<"model : ";
        in>>mas.model;

        cout<<endl<<"pretPerZi : ";
        in>>mas.pretZi;

        cout<<endl<<"dispon(!!!! 1/0) : ";
        in>>mas.disponibila;

        cout<<endl<<"nrRev : ";
        in>>mas.nrReview;

        cout<<endl<<"revMas : ";
        if(mas.reviewMasina!=NULL)
            delete[] mas.reviewMasina;
        mas.reviewMasina = new float[mas.nrReview];
        for(int i=0;i<mas.nrReview;i++)
            in>>mas.reviewMasina[i];

        cout<<endl<<"pretMasina : ";
        in>>mas.pretMasina;

        cout<<endl<<"inCeGaraj : ";
        in>>mas.inCeGaraj;

        return in;
    }

    friend ostream& operator<<(ostream& out, const Masina& mas)
    {
        //out<<endl<<"id: "<<mas.idMasina;
        out<<endl<<"nrMatricol: "<<mas.nrMatricul;
        out<<endl<<"firma : "<<mas.firma;
        out<<endl<<"model : "<<mas.model;
        out<<endl<<"pret zi : "<<mas.pretZi;
        out<<endl<<"dispon: "<<mas.disponibila;

        out<<endl<<"pret masina : "<<mas.pretMasina;

        out<<endl<<"In ce garaj : "<<mas.inCeGaraj;

         out<<endl<<"nrRev : "<<mas.nrReview;
        out<<endl;
        for(int i=0;i<mas.nrReview;i++)
            out<<"review : "<<mas.reviewMasina[i]<<" ";
        return out;
    }


    string getNrMatricul()
    {
        return this->nrMatricul;
    }

    void setInCeGaraj(int x)
    {
        this -> inCeGaraj = x;
    }
    int getInCeGaraj()
    {
        return this-> inCeGaraj;
    }

    void setPretMasina(double pretMasina)
    {
        this->pretMasina = pretMasina;
    }

    double getPretMasina()
    {
        return this->pretMasina;
    }

    void setReviewMasina (float * reviewMasina, int nrReview )
    {
        this->nrReview = nrReview;
        if(this->reviewMasina != NULL)
            delete[] reviewMasina;
        this-> reviewMasina =  new float[nrReview];
        for(int i=0;i<nrReview;i++)
        {
            this-> reviewMasina[i] = reviewMasina[i];
        }
    }


    float * getReviewMasina()
    {
        return this->reviewMasina;
    }
    int getNrReview()
    {
        return this-> nrReview;
    }

    void setDisponibila(bool disp )
    {
        this->disponibila = disp;
    }
    bool getDisponibila()
    {
        return this->disponibila;
    }
    void setFirmaSiModel(string firma, string model)
    {
        this->firma = firma;
        this->model = model;
    }
    string getFirma()
    {
        return this->firma;
    }
    string getModel()
    {
        return this-> model;
    }

    float getPretZi ()
    {
        return this-> pretZi;
    }

    Masina& operator=(const Masina& mas)
    {
        if(this!=&mas)
        {
            this-> nrMatricul = mas.nrMatricul;
            this-> firma  = mas.firma;
            this-> model = mas.model;
            this-> pretZi = mas.pretZi;
            this-> disponibila = mas.disponibila;
            this-> nrReview = mas.nrReview;
            this->pretMasina = mas.pretMasina;
            this-> reviewMasina = new float[mas.nrReview];
            for(int i=0;i<mas.nrReview;i++)
                this ->reviewMasina[i]  = mas.reviewMasina[i];
            //cout<<"ghe";
            this-> inCeGaraj = mas.inCeGaraj;
        }
        return *this;
    }

    Masina (string firma , string model, string nrMatricul, float pretZi, bool disponibila, double pretMasina, int inCeGaraj , int nrReview, float* reviewMasina)//:idMasina(contorIdM++)
    {
        this-> nrMatricul = nrMatricul;
        this-> firma  = firma;
        this-> model = model;
        this-> pretZi = pretZi;
        this-> disponibila = disponibila;
        this-> nrReview = nrReview;
        this->pretMasina = pretMasina;

        this-> reviewMasina = new float[nrReview];
        for(int i=0;i<nrReview;i++)
            this ->reviewMasina[i]  = reviewMasina[i];
        this-> inCeGaraj = inCeGaraj;


    }

    Masina()//:idMasina(contorIdM++)
    {
        this-> nrMatricul = "-";
        this-> firma  = "-";
        this-> model = "-";
        this-> pretZi = 0;
        this-> disponibila = false;
        this-> nrReview = 0;
        this-> reviewMasina = NULL;
        this->pretMasina = 0;
        this->inCeGaraj = 0;

    }
    Masina(string firma, string model)//:idMasina(contorIdM++)
    {
        this -> model = model;
        this-> firma = firma;

        this-> nrMatricul = "-";
        this-> pretZi = 0;
        this-> disponibila = false;
        this-> nrReview = 0;
        this->pretMasina = 0;

        this-> reviewMasina = NULL;
        this-> inCeGaraj = 0;


    }

    Masina (const Masina& mas)//:idMasina(mas.idMasina)
    {
        this-> nrMatricul = mas.nrMatricul;
        this-> firma  = mas.firma;
        this-> model = mas.model;
        this-> pretZi = mas.pretZi;
        this-> disponibila = mas.disponibila;
        this-> nrReview = mas.nrReview;
        this->pretMasina = mas.pretMasina;

        this-> reviewMasina = new float[mas.nrReview];
        for(int i=0;i<this->nrReview;i++)
            this ->reviewMasina[i]  = mas.reviewMasina[i];
        this-> inCeGaraj = mas.inCeGaraj;

    }

    explicit operator int()
    {
        return (int)this-> pretZi;
    }
    Masina operator+(int x)
    {
        Masina aux(*this);
        aux . pretZi = aux. pretZi + x;
        return aux;
    }
    friend Masina operator+(int x, Masina mas)
    {
        mas. pretZi = x+ mas. pretZi;
        return mas;
    }

    Masina operator+(const Masina& mas)
    {
        Masina aux;
        aux.pretMasina = 0;
        aux.pretMasina = this->pretMasina + mas. pretMasina;
        return aux;

    }
    Masina operator*(int x)
    {
        Masina aux(*this);
        aux . pretZi = aux. pretZi * x;
        return aux;
    }
    friend Masina operator*(int x, Masina mas)
    {
        mas. pretZi = x* mas. pretZi;
        return mas;
    }



    float operator[](int index)
    {
        if(0 <= index && index < this-> nrReview)
            return reviewMasina[index];
        else
            return -1;
    }

    float medieRev ()
    {
        int i;
        float med=0;
        for(i=0;i< this->nrReview;i++)
            med = med + this -> reviewMasina[i];
        med = med / this->nrReview;
        return med;

    }


    ~Masina()
    {
        if(this-> reviewMasina != NULL)
            delete[] this-> reviewMasina;
    }

};

//int Masina::contorIdM=1;

class MasinaElectrica: public Masina
{
    int range;
public:
    void afisTipCarburant(){cout<<"Mas Electrica";}

    int getRange()
    {
        return this->range;
    }

    friend istream& operator>>(istream& in, MasinaElectrica& m)
    {
        in>>(Masina&) m;
        cout<<"\nRange Baterie: ";
        in>>m.range;

        return in;
    }
    friend ostream& operator<<(ostream& out, const MasinaElectrica& m)
    {
        out<<(Masina&) m;
        out<<"\nRange baterie: "<<m.range;

        return out;
    }
    MasinaElectrica& operator=(const MasinaElectrica& m)
    {
        if(this != &m)
        {
            Masina::operator=(m);
            this-> range = m.range;
        }
        return *this;
    }
    MasinaElectrica(const MasinaElectrica& m):Masina(m)
    {
        this -> range = m.range;
    }
    MasinaElectrica(string firma, string model, int range):Masina(firma,model)
    {
        this -> range = range;
    }
    MasinaElectrica():Masina()
    {
        this-> range = 0;
    }
    MasinaElectrica(string firma , string model, string nrMatricul, float pretZi, bool disponibila, double pretMasina, int inCeGaraj,int nrReview, float* reviewMasina,int range):Masina( firma ,  model,  nrMatricul,  pretZi,  disponibila,    pretMasina,  inCeGaraj,nrReview,  reviewMasina)
    {
        this -> range = range;
    }
    ~MasinaElectrica()
    {

    }

};



class Garaj
{
    int nrGaraj;
    string adresa;
    int capacitate;
    int nrMasiniActuale;
    Masina* lm;
    int nrIntrari;

public:
    Garaj operator+(const Masina& mas)
    {
        int i;
        Garaj newGaraj (*this);
        Masina* aux = new Masina[newGaraj.nrMasiniActuale];
        for(i=0;i< newGaraj. nrMasiniActuale;i++)
        {
            aux[i] = newGaraj.lm[i];
        }
        if(newGaraj.lm !=NULL)
            delete[] newGaraj.lm;
        newGaraj. nrMasiniActuale ++;
        newGaraj.lm = new Masina [newGaraj. nrMasiniActuale];
        for(i=0;i< newGaraj. nrMasiniActuale -1 ; i++)
            newGaraj.lm[i] = aux[i];
        newGaraj.lm[newGaraj. nrMasiniActuale -1] = mas;
        return newGaraj;
    }

    Masina operator[](int index)
    {
        if(index<1 || index > this-> nrMasiniActuale+1)
        {
            cout<<"idx prst\n";
            return  Masina();
        }
        else
            return this->lm[index -1];
    }

    friend istream& operator>>(istream& in, Garaj& gar)
    {
        cout<<endl<<"nrGar : ";in>>gar.nrGaraj;
        cout<<endl<<"adresa : ";in>>gar.adresa;
        cout<<endl<<"capacitate : ";in>>gar.capacitate;
        cout<<endl<<"nrMasiniActuale : ";in>>gar.nrMasiniActuale;
        cout<<endl<<"nrIntrari : ";in>>gar.nrIntrari;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Garaj& gar)
    {
        out<<endl<<"nrGar : "<<gar.nrGaraj;
        out<<endl<<"adresa : "<<gar.adresa;
        out<<endl<<"capacitate : "<<gar.capacitate;
        out<<endl<<"nrMasiniActuale : "<<gar.nrMasiniActuale;
        out<<endl<<"nrIntrari : "<<gar.nrIntrari;
        return out;
    }
    Garaj& operator=(const Garaj& gar)
    {
        if(this!=&gar)
        {
            this -> nrGaraj = gar.nrGaraj;
            this -> adresa = gar.adresa;
            this -> capacitate = gar.capacitate;
            this -> nrMasiniActuale = gar.nrMasiniActuale;
            this -> nrIntrari = gar.nrIntrari;
            if(this-> lm !=NULL)
                delete[] this->lm;
            this->lm = new Masina[gar.nrMasiniActuale];
            for(int i=0; i<gar.nrMasiniActuale;i++)
                this-> lm[i] = gar.lm[i];
        }
        return *this;

    }

    Garaj (const Garaj& gar)
    {

        this -> nrGaraj = gar.nrGaraj;
        this -> adresa = gar.adresa;
        this -> capacitate = gar.capacitate;
        this -> nrMasiniActuale = gar.nrMasiniActuale;
        this -> nrIntrari = gar.nrIntrari;
        //if(this-> lm !=NULL)
            //delete[] this->lm;
        this->lm = new Masina[gar.nrMasiniActuale];
        for(int i=0; i<gar.nrMasiniActuale;i++)
            this-> lm[i] = gar.lm[i];

    }

    Garaj(int nrGaraj , string adresa , int capacitate , int nrMasiniActuale , int nrIntrari )
    {
        this -> nrGaraj = nrGaraj;
        this -> adresa = adresa;
        this -> capacitate = capacitate;
        this -> nrMasiniActuale = nrMasiniActuale;
        this -> nrIntrari = nrIntrari;
        if(this-> lm !=NULL)
            delete[] this->lm;

    }

    Garaj()
    {
        this -> nrGaraj = 0;
        this -> adresa = "-";
        this -> capacitate = 0;
        this -> nrMasiniActuale = 0;
        this -> nrIntrari = 0;
        this-> lm = NULL;
    }

    Garaj(int capacitate, int nrMasiniActuale)
    {
        this -> nrGaraj = 0;
        this -> adresa = "-";
        this -> nrIntrari = 0;

        this -> capacitate = capacitate;
        this -> nrMasiniActuale = nrMasiniActuale;
        this-> lm = NULL;


    }
    bool operator==(const Garaj& gar)
    {
        if(this-> nrMasiniActuale == gar.nrMasiniActuale)
            return true;
        return false;
    }
    bool operator>(const Garaj& gar)
    {
        if(this-> capacitate > gar.capacitate)
            return true;
        return false;
    }
    // pre
    const Garaj& operator++()
    {
        this-> capacitate ++;
        return *this;
    }
    //post
    const Garaj operator++(int)
    {
        Garaj aux(*this);
        this-> capacitate++;

        return aux;
    }


    bool maiEsteLoc()
    {
        if ( this->capacitate > this -> nrMasiniActuale )
            return true;
        return false;
    }

    ~Garaj()
    {
        if(this-> lm != NULL)
            delete[] this -> lm;
    }
};



class Administrator
{
    char * nume; //
    string prenume; //
    char initialaTata; //
    string username;  //
    string  password; //

    float sumaCard; //


   // int nrMas;
   // Masina *masini;
public:


    friend istream& operator>>(istream& in, Administrator& adm)
    {
        int i;
        cout<<endl<<"nume : ";
        char a[100];
        in.get(a,100);
        if(adm.nume != NULL)
            delete[] adm.nume;
        adm.nume = new char[strlen(a)+1];
        strcpy(adm.nume,a);

        cout<<endl<<"prenume : ";
        in>>adm.prenume;

        cout<<endl<<"initala tata : ";
        in>>adm.initialaTata;

        cout<<endl<<"username : ";
        in>>adm.username;

        cout<<endl<<"password : ";
        in>>adm.password;


        cout<<endl<<"suma : ";
        in>>adm.sumaCard;



        return in;

    }

    friend ostream& operator<<(ostream& out, const Administrator& adm)
    {
        //int i;

        out<<endl<<"nume : "<<adm.nume;


        out<<endl<<"prenume : "<<adm.prenume;

        out<<endl<<"initala tata : "<<adm.initialaTata;


        out<<endl<<"username : "<<adm.username;


        out<<endl<<"password : "<<adm.password;

        out<<endl<<"suma : "<<adm.sumaCard;




        return out;
    }

    void setUsename( string username)
    {
        this-> username = username;
    }
    string getUsername ()
    {
        return this-> username;
    }

    void setPassword (string password)
    {
        this -> password = password;
    }

    string getPassword()
    {
        return this-> password;
    }



    void setNume (char * nume)
    {
        if(this->nume != NULL)
            delete[] this->nume;
        this->nume = new char[strlen(nume)+1];
        strcpy(this->nume,nume);
    }
    char * getNume()
    {
        return this->nume;
    }

    void setPrenume(string prenume)
    {
        this->prenume = prenume;
    }

    string getPrenume()
    {
        return this->prenume;
    }

    void setInitialaTata(char initialaTata)
    {
        this-> initialaTata = initialaTata;
    }
    char getInitialaTata ()
    {
        return this->initialaTata;
    }



    void setSumaCard (float sumaCard)
    {
        this-> sumaCard = sumaCard;
    }

    float getSumaCard ()
    {
        return this-> sumaCard;
    }




    Administrator(char * nume, string prenume, char initialaTata, string username, string password,float sumaCard)
    {
        this -> nume = new char[strlen(nume)+1];
        strcpy(this->nume,nume);

        this -> prenume = prenume;

        this -> initialaTata = initialaTata;

        this-> username = username;

        this -> password = password;

        this-> sumaCard = sumaCard;


    }

     bool lgin(string username, string password)
    {
        if(this-> username == username  && this-> password == password)
            return true;
        else
            return false;
    }


    void cumpar( Masina &mas)
    {
        double val = mas.getPretMasina();
        this -> sumaCard = this -> sumaCard - val;

    }

    void cumparE( MasinaElectrica &mas)
    {
        double val = mas.getPretMasina();
        this -> sumaCard = this -> sumaCard - val;

    }


    void vreauBani (float cat)
    {
        this -> sumaCard += cat;
    }

    Administrator& operator=(const Administrator& adm)
    {
        if(this!= &adm)
        {
            this -> nume = new char[strlen(adm.nume)+1];
            strcpy(this->nume,adm.nume);

            this -> prenume = adm.prenume;

            this -> initialaTata = adm.initialaTata;

            this-> username = adm.username;

            this -> password = adm.password;

            this-> sumaCard = adm.sumaCard;
        }

        *this;
    }


    Administrator(const Administrator& adm)//:idAdministrator(adm.idAdministrator)
    {
            this -> nume = new char[strlen(adm.nume)+1];
            strcpy(this->nume,adm.nume);

            this -> prenume = adm.prenume;

            this -> initialaTata = adm.initialaTata;

            this-> username = adm.username;

            this -> password = adm.password;

            this-> sumaCard = adm.sumaCard;
    }


    Administrator(string username, string password, char * nume)
    {
        this-> username = username;

        this -> password = password;





        this->nume = new char[strlen(nume)+1];
        strcpy(this->nume,nume);

        this->prenume = "-";

        this-> initialaTata = 'w';



        this-> sumaCard = 0;
    }

    Administrator()
    {
        this-> username = "-";

        this -> password = "-";





        this->nume = new char[strlen("Anonim")+1];
        strcpy(this->nume,"Anonim");

        this->prenume = "-";

        this-> initialaTata = 'w';

        this-> sumaCard = 0;
    }


    ~Administrator()
    {

        if(this->nume != NULL)
            delete[] this->nume;
    }
};



int nrAdm = 0, nrMas =0, nrCli = 0, nrGar = 0 ,nrMasE =0, nrCliOG=0;
    vector <Administrator> administratori;
    vector <Masina> masini;
    vector <ClientNormal> clientiN;
    list <Garaj> garaje;
    vector <MasinaElectrica> masiniElectice;
    vector <ClientOG> clientiOG;



string getUser ()
{
    string username;
    int ok;
    cout<<"Enter Username : ";
    cin>>username;
    cout<<"Confirm? [0][1] : ";
    cin>>ok;
    while(ok != 1)
    {
        cout<<"Please enter a username : ";
        cin>>username;
        cout<<"Confirm? [0][1] : ";
        cin>>ok;
    }
    return username;

}

string getPass ()
{
    string password1 , password2;
    cout<<"Enter password : ";
    cin>>password1;
    cout<<"re-Enter password : ";
    cin>>password2;

    while(password1 != password2)
    {
        cout<<"Wrong combination ... retry"<<endl;
        cout<<"Enter password : ";
        cin>>password1;
        cout<<"re-Enter password : ";
        cin>>password2;
    }
    return password1;
}

void saveUser(string username, string password)
{
    //if(is_empty("admin.txt"))
        ofstream file("admin.txt", ios_base::app);

    //string filename = username + ".txt";
    //ofstream file("admin.txt");
    file<<username<<" "<<password<<"\n";
}

void registerAdmin()
{
    /*string username, password = "0" , password1 = "0";
    cout<<"Create USERNAME : ";
    cin>>username;
    cout<<"Create password : ";
    cin>>password;
    /// stochez user si parola intr un fisier;*/
    string username = getUser ();
    string password = getPass ();
    saveUser(username,password);

}


void adaugaBani(int id)
{
    float sum;
    cout<<"suma actuala: "<<administratori[id] . getSumaCard();

    cout<<"\nadauga suma: ";
    cin>>sum;
    administratori[id] . vreauBani(sum);
    cout<<"suma dupa ad: "<<administratori[id] . getSumaCard()<<"\n";
}

void adaugaBaniCli(int id, int  tipcli)
{
    float sum;
    if(tipcli == 1)
    {
        cout<<"suma actuala: "<<clientiN[id] . getSumaCard();
        cout<<"\nadauga suma: ";
        cin>>sum;
        clientiN[id] . vreauBani(sum);
        cout<<"suma dupa ad: "<<clientiN[id] . getSumaCard()<<"\n";
    }
    else if(tipcli ==2)
    {
        cout<<"suma actuala: "<<clientiOG[id] . getSumaCard();
        cout<<"\nadauga suma: ";
        cin>>sum;
        clientiOG[id] . vreauBani(sum);
        cout<<"suma dupa ad: "<<clientiOG[id] . getSumaCard()<<"\n";
    }
}


void cumparaMasina(int id)
{
    int tip;
    cout<<"Press 1 pt masina \nPress 2 pt masina electrica \n ";
    cout<<"introduce varianta: ";
    cin>>tip;
    if(tip == 1)
    {
        Masina mas;
        cin>>mas;
        masini.push_back(mas);
        nrMas++;
        administratori[id]. cumpar(mas);

    }
    else if(tip == 2)
    {
        MasinaElectrica mas;
        cin>> mas;
        masiniElectice.push_back(mas);
        nrMasE++;
        administratori[id] . cumparE(mas);
    }

}


void mentenanta()
{
    int id;
    cout<<"Lista de Masini: ";
    for(int i=0; i< nrMas;i++)
    {
        cout<<"\n\n id = "<<i<<"\n";
        cout<< masini[i];
    }
    cout<<"\n Alege masina: ";
    cin>>id;
    if(id < nrMas)
    {
        if(masini[id] . getDisponibila() == true)
        {
            masini[id] . setDisponibila(false);
            cout<<"masina "<<masini[id]. getFirma()<<" "<<masini[id]. getModel()<<" nu mai este disp \n";
        }
        else
        {
            masini[id] . setDisponibila(true);
            cout<<"masina "<<masini[id]. getFirma()<<" "<<masini[id]. getModel()<< " este din nou disp \n";
        }

    }
    else
        cout<<"idGresit \n";

}

void functiiAdm(int id)
{
    int com;
    cout<<"\n1) Adauga bani"<<endl;
    cout<<"2) Cumpara masina: "<<endl;
    cout<<"3) Exit"<<endl;
    cout<<"4) Disable/Enable mas: "<<endl;
    do
    {
        cout<<"comanda (AdBani/Cumpara/Exit/disp) : ";
        cin>>com;
        cout<<endl;
        switch (com)
        {
            case 1:
                adaugaBani(id);
                break;
            case 2:
                cumparaMasina(id);
                break;
            case 4:
                mentenanta();
                break;
            case 3:
                cout<<"Exit"<<endl;
                break;
            default: cout<<"Retry"<<endl;
        }
    }while(com != 3);
}


void logInAdmin()
{
    // 3 4
    string us, pas;
    int ok = 0;
    cout<<"Enter username: ";
    cin>>us;
    cout<<"Enter password: ";
    cin>>pas;
    while(ok == 0)
    {
        for(int i=0;i<2;++i)
        {
            if(administratori[i] . getPassword() == pas && administratori[i] . getUsername() == us)
            {
                ok = 1;
                functiiAdm(i);
            }
        }
        if(ok == 0)
        {
            cout<<"Wrong username/password \n";
            cout<<"Enter username: ";
            cin>>us;
            cout<<"Enter password: ";
            cin>>pas;
        }
    }

}

void admin()
{
    int com;
    cout<<"1) Log in"<<endl;
    //cout<<"2) Register"<<endl;
    cout<<"3) Exit"<<endl;
    do
    {
        cout<<"comanda (log/reg/Exit) : ";
        cin>>com;
        cout<<endl;
        switch (com)
        {
            case 1:
                logInAdmin();
                break;
            case 3:
                cout<<"Exit"<<endl;
                break;
            default: cout<<"Retry"<<endl;
        }
    }while(com != 3);
}


void inchiriazaMasina(int id, int tipcli)
{
    int tip,i,idma,cateZile;
    cout<<"\n1)Normala 2)Electrica";
    cout<<"\n Ce fel de masina: ";
    cin>>tip;
    if(tipcli == 1)
    {
        if(tip ==1)
        {
            for(i=0;i<nrMas;i++)
            {
                if(masini[i] . getDisponibila() == true)
                {
                    cout<<"\n\nid ="<< i <<"\n";
                    cout<<masini[i];
                }
            }
            cout<<"Ce masina vrei (introdu id): ";
            cin>>idma;
            cout<<"Cate zile doresti sa inchiriezi masina :";
            cin>>cateZile;
            int suma = clientiN[id] . getSumaCard();
            cout<<"Cati bani ai: "<<suma<<"\n";
            //cout<<"\n taxe aditionale"<<clientiN[id]. calcTaxe()<<"\n";
            clientiN[id]. calcTaxe();
            suma = suma - (masini[idma] . getPretZi() + clientiN[id]. calcPretClientOG())* cateZile;
            clientiN[id] . setSumaCard(suma);
            cout<<"\nCati bani mai ai : "<<clientiN[id] . getSumaCard()<<"\n";
            //int baniAdm = administratori[0]. getSumaCard()
            administratori[0] . vreauBani ((masini[idma] . getPretZi() + clientiN[id]. calcPretClientOG())* cateZile);
            cout<<"\n suma adm: "<<administratori[0]. getSumaCard()<<"\n";
        }
        if(tip ==2)
        {
            for(i=0;i<nrMasE;i++)
            {
                if(masiniElectice[i] . getDisponibila() == true)
                {
                    cout<<"\n\nid ="<< i <<"\n";
                    cout<<masiniElectice[i];
                }
            }
            cout<<"\nCe masina vrei (introdu id): ";
            cin>>idma;
            cout<<"Cate zile doresti sa inchiriezi masina :";
            cin>>cateZile;
            int suma = clientiN[id] . getSumaCard();
            cout<<"Cati bani ai: "<<suma<<"\n";
            clientiN[id]. calcTaxe();
            suma = suma - (masiniElectice[idma] . getPretZi() + clientiN[id]. calcPretClientOG())* cateZile;
            clientiN[id] . setSumaCard(suma);
            cout<<"\nCati bani mai ai : "<<clientiN[id] . getSumaCard()<<"\n";
            //int baniAdm = administratori[0]. getSumaCard()
            administratori[0] . vreauBani ((masiniElectice[idma] . getPretZi() + clientiN[id]. calcPretClientOG())* cateZile);
            cout<<"\n suma adm: "<<administratori[0]. getSumaCard()<<"\n";
        }
    }
    else if(tipcli ==2)
    {
        if(tip ==1)
        {
            for(i=0;i<nrMas;i++)
            {
                if(masini[i] . getDisponibila() == true)
                {
                    cout<<"\n\nid ="<< i <<"\n";
                    cout<<masini[i];
                }
            }
            cout<<"Ce masina vrei (introdu id): ";
            cin>>idma;
            cout<<"Cate zile doresti sa inchiriezi masina :";
            cin>>cateZile;
            int suma = clientiOG[id] . getSumaCard();
            cout<<"Cati bani ai: "<<suma<<"\n";
            clientiOG[id]. calcTaxe();
            suma = suma - (masini[idma] . getPretZi() + clientiOG[id] . calcPretClientOG())* cateZile;
            clientiOG[id] . setSumaCard(suma);
            cout<<"\nCati bani mai ai : "<<clientiOG[id] . getSumaCard()<<"\n";
            //int baniAdm = administratori[0]. getSumaCard()
            administratori[0] . vreauBani ((masini[idma] . getPretZi() + clientiOG[id] . calcPretClientOG())* cateZile);
            cout<<"\n suma adm: "<<administratori[0]. getSumaCard()<<"/n";
        }
        if(tip ==2)
        {
            for(i=0;i<nrMasE;i++)
            {
                if(masiniElectice[i] . getDisponibila() == true)
                {
                    cout<<"\n\nid ="<< i <<"\n";
                    cout<<masiniElectice[i];
                }
            }
            cout<<"\nCe masina vrei (introdu id): ";
            cin>>idma;
            cout<<"Cate zile doresti sa inchiriezi masina :";
            cin>>cateZile;
            int suma = clientiOG[id] . getSumaCard();
            cout<<"Cati bani ai: "<<suma<<"\n";
            //clientiOG[id]. calcTaxe();
            suma = suma - masiniElectice[idma] . getPretZi() * cateZile;
            clientiOG[id] . setSumaCard(suma);
            cout<<"\nCati bani mai ai : "<<clientiOG[id] . getSumaCard()<<"\n";
            //int baniAdm = administratori[0]. getSumaCard()
            administratori[0] . vreauBani (masiniElectice[idma] . getPretZi() * cateZile);
            cout<<"\n suma adm: "<<administratori[0]. getSumaCard()<<"\n";
        }
    }
}

void functiiCli(int id, int tipcli)
{
    int com;
    cout<<"\n1) Adauga bani"<<endl;
    cout<<"2) Inchiriaza masina: "<<endl;
    cout<<"3) Exit"<<endl;
    cout<<"4) Disable/Enable mas: "<<endl;
    do
    {
        cout<<"comanda (AdBani/Inchiriaza/Exit) : ";
        cin>>com;
        cout<<endl;
        switch (com)
        {
            case 1:
                adaugaBaniCli(id,tipcli);
                break;
            case 2:
                inchiriazaMasina(id,tipcli);
                break;
            case 4:
                mentenanta();
                break;
            case 3:
                cout<<"Exit"<<endl;
                break;
            default: cout<<"Retry"<<endl;
        }
    }while(com != 3);
}

void registerClient()
{
    cout<<"Creeaza cont: \n";
    ClientNormal normal;
    cin>>normal;
    clientiN.push_back(normal);
    nrCli++;
    functiiCli(nrCli-1,1);
}

void logInClient()
{
    int tipcli;
    cout<<"1)Client Normal \n";
    cout<<"2)Client OG \n";
    cout<<"Ce tip : ";
    cin>>tipcli;
   // 3 4
    if(tipcli ==1)
    {
        string us, pas;
        int ok = 0;
        cout<<"Enter username: ";
        cin>>us;
        cout<<"Enter password: ";
        cin>>pas;
        while(ok == 0)
        {
            for(int i=0;i<nrCli;++i)
            {
                if(clientiN[i] . getPassword() == pas && clientiN[i] . getUsername() == us)
                {
                    ok = 1;
                    functiiCli(i,tipcli);
                }
            }
            if(ok == 0)
            {
                cout<<"Wrong username/password \n";
                cout<<"Enter username: ";
                cin>>us;
                cout<<"Enter password: ";
                cin>>pas;
            }
        }
    }
    else if(tipcli ==2)
    {
        string us, pas;
        int ok = 0;
        cout<<"Enter username: ";
        cin>>us;
        cout<<"Enter password: ";
        cin>>pas;
        while(ok == 0)
        {
            for(int i=0;i<nrCliOG;++i)
            {
                if(clientiOG[i] . getPassword() == pas && clientiOG[i] . getUsername() == us)
                {
                    ok = 1;
                    functiiCli(i,tipcli);
                }
            }
            if(ok == 0)
            {
                cout<<"Wrong username/password \n";
                cout<<"Enter username: ";
                cin>>us;
                cout<<"Enter password: ";
                cin>>pas;
            }
        }
    }
}

void clie()
{
    int com;
    cout<<"1) Log in"<<endl;
    cout<<"2) Register"<<endl;
    cout<<"3) Exit"<<endl;
    do
    {
        cout<<"comanda (<pt clie>log/reg/Exit) : ";
        cin>>com;
        cout<<endl;
        switch (com)
        {
            case 1:
                logInClient();
                break;
            case 2:
                registerClient();
                break;
            case 3:
                cout<<"Exit"<<endl;
                break;
            default: cout<<"Retry"<<endl;
        }
    }while(com != 3);
}


int main()
{
    int i,j;

    ifstream bdAdm;
    bdAdm.open("admin.txt", ios::in);    /// la citirea din fisier am fost ajutat de un coleg
    string linie,aux;
    bdAdm.seekg(0);  // incepe de la 0
    getline(bdAdm, linie);
    while(getline(bdAdm, linie))
    {
        nrAdm ++;
        istringstream fin(linie);
        string a[7];
        for(i=0;i<6;++i)
        {
            fin>> aux;
            a[i] = aux;
        }
        char* nume = &a[0][0];
        string prenume = a[1];
        char initialaTata = a[2][0];
        string username = a[3];
        string  password = a[4];
        float sumaCard = stof(a[5]);

        Administrator admi(nume,prenume,initialaTata,username,password,sumaCard);
        administratori.push_back(admi);


    }
    bdAdm.close();
    //cout<<administratori[0]<<endl<<administratori[1];

    nrMas =0;
    ifstream bdMas;
    bdMas.open("masini.txt", ios::in);
    bdMas.seekg(0);
    //istringstream fin(linie);
    //fin>>n1;
    //getline(bdMas, linie);
    //for(i=0;i<n1;++i)
    while(getline(bdMas, linie))
    {
        nrMas ++;
        istringstream fin(linie);
        string ar[10];
        for(i=0;i<8;++i)
        {
            fin>> aux;
            ar[i] = aux;
        }
        string nrMatricul = ar[2];
        string firma = ar[0];
        string model = ar[1];
        float pretZi = stof(ar[3]);
        bool disponibila = (ar[4] == "1");

        double pretMasina  = stof(ar[5]);
        stringstream convInt(ar[6]);
        int inCeGaraj;
        convInt>>inCeGaraj;
        int nrReview = int(ar[7][0]) - 48;
        float  auxReviewMasina[nrReview];
        for(j=0;j<nrReview;++j)
        {
            fin>>aux;
            auxReviewMasina[j] = stof(aux);
        }
        float * reviewMasina = auxReviewMasina;


        Masina masi(firma,model,nrMatricul,pretZi,disponibila,pretMasina,inCeGaraj,nrReview,reviewMasina);

        masini.push_back(masi);
    }
    bdMas.close();
    //for(i=0;i<3;++i)
        //cout<<masini[i]<<endl;



    ifstream bdMasE;
    bdMasE.open("masiniElectrice.txt", ios::in);
    bdMasE.seekg(0);
    //getline(bdMasE, linie);
    while(getline(bdMasE, linie))
    {
        nrMasE ++;
        istringstream fin(linie);
        string ar[10];
        for(i=0;i<9;++i)
        {
            fin>> aux;
            ar[i] = aux;
        }
        string nrMatricul = ar[2];
        string firma = ar[0];
        string model = ar[1];
        float pretZi = stof(ar[3]);
        bool disponibila = (ar[4] == "1");

        double pretMasina  = stof(ar[5]);
        stringstream convInt(ar[6]);
        int inCeGaraj;
        convInt>>inCeGaraj;
        int nrReview = int(ar[8][0]) - 48;
        float  auxReviewMasina[nrReview];
        stringstream convInt1(ar[7]);
        int range;
        convInt1>> range;
        for(j=0;j<nrReview;++j)
        {
            fin>>aux;
            auxReviewMasina[j] = stof(aux);
        }
        float * reviewMasina = auxReviewMasina;



        MasinaElectrica masin(firma,model,nrMatricul,pretZi,disponibila,pretMasina,inCeGaraj,nrReview,reviewMasina,range);

        masiniElectice.push_back(masin);
    }
    bdMasE.close();
    //for(i=0;i<1;++i)
        //cout<<masiniElectice[i]<<endl;
    //cout<<nrMasE;


    ifstream bdCliOG;
    bdCliOG.open("clientiOG.txt", ios::in);
    bdCliOG.seekg(0);
    int k=0;
    //getline(bdCliOG, linie);
    while(getline(bdCliOG, linie))
    {
        nrCliOG ++;
        istringstream fin(linie);
        string ar1[30];

        for(i=0;i<15;++i)
        {
            fin>> aux;
            ar1[i] = aux;
            //cout<<ar1[i]<<" "<<aux<<endl;
           // k++;
        }
        //cout<<ar1[9];
        //cout<<k<<" "<<ar1[1]<<endl;
        string nume = ar1[0];
        string prenume = ar1[1];
        char initialaTata = ar1[2][0];
        string username = ar1[3];
        string  password = ar1[4];

        string auxNume[2];
        auxNume[0] = ar1[5];
        auxNume[1] = ar1[6];
        string * numeIntreg = auxNume;
        string dataExp = ar1[7];
        stringstream convInt(ar1[8]);
        int numereMagice ;
        convInt>>numereMagice;
        float sumaCard = stof(ar1[9]);
        int auxnr[4];
        stringstream convInt1(ar1[10]);
        convInt1>> auxnr[0];
        stringstream convInt2(ar1[11]);
        convInt2>> auxnr[1];
        stringstream convInt3(ar1[12]);
        convInt3>> auxnr[2];
        stringstream convInt4(ar1[13]);
        convInt4>> auxnr[3];
        int* numereFata = auxnr;
        string grad = ar1[14];

        //cout<<ar1[9];
        ClientOG clieOG(nume, prenume, initialaTata, username,password,numereFata, numeIntreg, dataExp, numereMagice, sumaCard,grad);

        clientiOG.push_back(clieOG);
    }
    bdCliOG.close();
    //for(i=0;i<1;++i)
        //cout<<clientiOG[i]<<endl;


    ifstream bdCli;
    bdCli.open("clienti.txt", ios::in);
    bdCli.seekg(0);
    getline(bdCli, linie);
    //vector <ClientNormal> clientiN;
    while(getline(bdCli, linie))
    {
        nrCli ++;
        istringstream fin(linie);
        string ar[20];
        for(i=0;i<15;++i)
        {
            fin>> aux;
            ar[i] = aux;
            //cout<<ar[i]<<" "<<aux<<endl;
        }
        string nume = ar[0];
        string prenume = ar[1];
        char initialaTata = ar[2][0];
        string username = ar[3];
        string  password = ar[4];

        string auxNume[2];
        auxNume[0] = ar[5];
        auxNume[1] = ar[6];
        string * numeIntreg = auxNume;
        string dataExp = ar[7];
        stringstream convInt(ar[8]);
        int numereMagice ;
        convInt>>numereMagice;
        float sumaCard = stof(ar[9]);
        int auxnr[4];
        stringstream convInt1(ar[10]);
        convInt1>> auxnr[0];
        stringstream convInt2(ar[11]);
        convInt2>> auxnr[1];
        stringstream convInt3(ar[12]);
        convInt3>> auxnr[2];
        stringstream convInt4(ar[13]);
        convInt4>> auxnr[3];
        int* numereFata = auxnr;
        int ani = ar[14][0] - '0';
        ClientNormal clie(nume, prenume, initialaTata, username,password,numereFata, numeIntreg, dataExp, numereMagice, sumaCard,ani);

        clientiN.push_back(clie);
    }
    bdCli.close();
    //for(i=0;i<2;++i)
       // cout<<clientiN[i]<<endl;



//cout<<1;
    ifstream bdGar;
    bdGar.open("garaj.txt", ios::in);
    bdGar.seekg(0);
    getline(bdGar, linie);
    while(getline(bdGar, linie))
    {
        nrGar++;
        istringstream fin(linie);
        string ar[6];
        for(i=0;i<5;++i)
        {
            fin>> aux;
            ar[i] = aux;
        }
        stringstream convInt1(ar[0]);
        int nrGaraj;
        convInt1>> nrGaraj;
        string adresa = ar[1];
        stringstream convInt2(ar[2]);
        int capacitate;
        convInt2>> capacitate;
        stringstream convInt3(ar[3]);
        int nrMasiniActuale;
        convInt3>> nrMasiniActuale;
        stringstream convInt4(ar[4]);
        int nrIntrari;
        convInt4>> nrIntrari;

        Garaj gara(nrGaraj , adresa , capacitate , nrMasiniActuale , nrIntrari );

        garaje.push_back(gara);
    }
    bdGar.close();
    //for(i=0;i<2;++i)
        //cout<<garaje[i]<<endl;

    //cout<<nrCli;

    //ClientNormal c;
    //cin>>c;
    //cout<<nrMas;
    int com;
    cout<<"1) Administrator"<<endl;
    cout<<"2) Client"<<endl;
    cout<<"3) Exit"<<endl;
    do
    {
        cout<< "Comanda (admin/client): ";
        cin>>com;
        cout<<endl;
        switch (com)
        {
            case 1:
                admin();
                break;
            case 2:
                clie();
                break;
            case 3:
                cout<<"EXIT"<<endl;
                break;
            default: cout<<"Retry"<<endl;

        }
    }while(com != 3);

    //for(auto m: clientiN)
    //{
       // cout<<m<<endl;
    //}

    fstream fout;
    fout.open("masiniElectrice.txt", ios::out | ios::trunc);
    for(auto m: masiniElectice)
    {
        fout<<m.getFirma()<<" ";
        fout<<m.getModel()<<" ";
        fout<<m.getNrMatricul()<<" ";
        fout<<m.getPretZi()<<" ";
        fout<<m.getDisponibila()<<" ";
        fout<<m.getPretMasina()<<" ";
        fout<<m.getInCeGaraj()<<" ";
        fout<<m.getRange()<<" ";
        fout<<m.getNrReview()<<" ";
        for(i=0;i<m.getNrReview();++i)
        {
            fout<< m.getReviewMasina()[i];
            if(i!= m.getNrReview() -1)
                fout<<" ";
        }
        fout<<"\n";
    }
    fout.close();

    fstream fout1;
    fout1.open("masini.txt", ios::out | ios::trunc);
    for(auto m: masini)
    {
        fout1<<m.getFirma()<<" ";
        fout1<<m.getModel()<<" ";
        fout1<<m.getNrMatricul()<<" ";
        fout1<<m.getPretZi()<<" ";
        fout1<<m.getDisponibila()<<" ";
        fout1<<m.getPretMasina()<<" ";
        fout1<<m.getInCeGaraj()<<" ";
        fout1<<m.getNrReview()<<" ";
        for(i=0;i<m.getNrReview();++i)
        {
            fout1<< m.getReviewMasina()[i];
            if(i!= m.getNrReview() -1)
                fout1<<" ";
        }
        fout1<<"\n";
    }
    fout1.close();


    fstream fout2;
    fout2.open("admin.txt", ios::out | ios::trunc);
    fout2<<"\n";
    for(auto m: administratori)
    {
        fout2<<m.getNume()<<" ";
        fout2<<m.getPrenume()<<" ";
        fout2<<m.getInitialaTata()<<" ";
        fout2<<m.getUsername()<<" ";
        fout2<<m.getPassword()<<" ";
        fout2<<m.getSumaCard()<<" ";
        fout2<<"\n";
    }
    fout2.close();


    fstream fout3;
    fout3.open("clientiOG.txt", ios::out | ios::trunc);
    for(auto m: clientiOG)
    {
        fout3<<m.getNume()<<" ";
        fout3<<m.getPrenume()<<" ";
        fout3<<m.getInitialaTata()<<" ";
        fout3<<m.getUsername()<<" ";
        fout3<<m.getPassword()<<" ";
        for(i=0;i<2;++i)
        {
            fout3<<m.getNumeIntreg()[i]<<" ";
        }
        fout3<<m.getDataExp()<<" ";
        fout3<<m.getNumereMagice()<<" ";
        fout3<<m.getSumaCard()<<" ";
        for(i=0;i<4;++i)
        {
            fout3<<m.getNumereFata()[i]<<" ";
        }
        fout3<<m.getGrad()<<" ";
        fout3<<"\n";
    }
    fout3.close();


    fstream fout4;
    fout4.open("clienti.txt", ios::out | ios::trunc);
    fout4<<"\n";
    for(auto m: clientiN)
    {
        fout4<<m.getNume()<<" ";
        fout4<<m.getPrenume()<<" ";
        fout4<<m.getInitialaTata()<<" ";
        fout4<<m.getUsername()<<" ";
        fout4<<m.getPassword()<<" ";
        for(i=0;i<2;++i)
        {
            fout4<<m.getNumeIntreg()[i]<<" ";
        }
        fout4<<m.getDataExp()<<" ";
        fout4<<m.getNumereMagice()<<" ";
        fout4<<m.getSumaCard()<<" ";
        for(i=0;i<4;++i)
        {
            fout4<<m.getNumereFata()[i]<<" ";
        }
        fout4<<m.getAni()<<" ";
        fout4<<"\n";
    }
    fout4.close();


    //cout<<" nr mas "<<nrMas;
    /*
            float rev[] = {9.8,10};
    Masina m1("audi","a5","b52abc",180,true,2,rev,30000,1);
     //Masina m2("audi","a5","b52abc",180,true,2,rev,30000,1);
      Masina m3(m1);
      Masina m4("audi","a3");
      //m4 = m3;
      cout<<m4;
     // m3 = m2;
    cin>>m3;
    cout<<m3;


    char num[] = {"Tonel"};
    string a ="ton";
    string numeInt[] = {"Tonel", "Tonel"};
    int nrFata[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    float chel[] = {1.1,1.2};
    //Administrator ad1(num,"user","par","tonel",'t' ,"03/21"  , numeInt , nrFata , 123 , 5000 ,2 , chel);
    //Administrator ad1("user","par",num);
    Administrator ad1(num,a,'a',"user", "pass",nrFata,numeInt,"03/21",123,40000);
    Administrator ad2(ad1);
    //ad2=ad1;
    //cin>>ad1;
    //cout<<ad1<<ad2;
    cout<<ad2;


    char num[] = {"Tonel"};
    Client cli;
    Client cli2("user","par",num);
    cout<<cli<<cli2;

    Garaj gar1(1,"dage",20,10,2);
    Garaj gar2;
    gar2 = gar1;
    cin>>gar2;
    cout<<gar2; */
    //char num[] = {"Tonel"};
    //ClientOG cli;
    //Client cli2("user","par",num);
    //cout<<cli;
    //MasinaElectrica m;
    //cout<<m;

    /*
    Masina a, c;
    Garaj b,d;
    b=b+a;
    b=b+c;
    cout<<b[2]<<"\n"<<b[1];

    Client* client[5];
    client[1] = new ClientOG();
    client[2] = new ClientNormal();

    client[1] ->afis();
    cout<<endl;
    client[2] ->afis();
    */
    return 0;
}
