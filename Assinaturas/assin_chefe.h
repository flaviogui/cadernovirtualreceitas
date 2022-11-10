void moduloChefe(void);
void editar_chefe(void);
void excluir_chefe(void);

struct chefe
{
   char id_chefe[4];
   char nome[50];
   char email[40];
   char cel[12];
   char status;
};

typedef struct chefe Chefe;

Chefe* preencheChefe(void);
void gravaChefe(Chefe*);
void exibeChefe (Chefe*);
Chefe* buscaChefe(void);

