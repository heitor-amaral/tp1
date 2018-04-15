#include "texturas.h"
#include <SOIL/SOIL.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdio.h>

void carregaTextura()
{
	//TEXTURA NAVE
  texturaNave = SOIL_load_OGL_texture(
       "./texturas/nave2.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaNave == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL: '%s'\n", SOIL_last_result());
    }
    //TEXTURA NAVE

    //TEXTURA PAUSE
  texturaPause = SOIL_load_OGL_texture(
       "./texturas/Pause.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaPause == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 2: '%s'\n", SOIL_last_result());
    }
    //TEXTURA PAUSE

    //TEXTURA INICIO
  texturaInicio = SOIL_load_OGL_texture(
       "./texturas/Inicio.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaInicio == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 3: '%s'\n", SOIL_last_result());
    }
    //TEXTURA INICIO

      //TEXTURA SAIR
  texturaSair = SOIL_load_OGL_texture(
       "./texturas/Sair.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaSair == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 4: '%s'\n", SOIL_last_result());
    }
    //TEXTURA SAIR

     //TEXTURA DERROTA
  texturaDerrota = SOIL_load_OGL_texture(
       "./texturas/Derrota.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaDerrota == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 5: '%s'\n", SOIL_last_result());
    }
    //TEXTURA DERROTA

    //TEXTURA RESET
 texturaReset = SOIL_load_OGL_texture(
      "./texturas/Reset.png",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
     SOIL_FLAG_INVERT_Y
  );

   glEnable( GL_BLEND );
   glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

   if (texturaReset == 0) //verifica se a textura carregou corretamente
   {
      printf("Erro do SOIL 6: '%s'\n", SOIL_last_result());
   }
   //TEXTURA RESET

   //TEXTURA VITORIA
texturaVitoria = SOIL_load_OGL_texture(
     "./texturas/Vitoria.png",
     SOIL_LOAD_AUTO,
     SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
 );

  glEnable( GL_BLEND );
  glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

  if (texturaVitoria == 0) //verifica se a textura carregou corretamente
  {
     printf("Erro do SOIL 7: '%s'\n", SOIL_last_result());
  }
  //TEXTURA VITORIA

  //TEXTURA FUNDO JOGO
texturaFundoJogo01 = SOIL_load_OGL_texture(
    "./texturas/fundo01.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
   SOIL_FLAG_INVERT_Y
);

 glEnable( GL_BLEND );
 glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

 if (texturaFundoJogo01 == 0) //verifica se a textura carregou corretamente
 {
    printf("Erro do SOIL 7: '%s'\n", SOIL_last_result());
 }

 texturaFundoJogo02 = SOIL_load_OGL_texture(
     "./texturas/fundo02.png",
     SOIL_LOAD_AUTO,
     SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
 );

  glEnable( GL_BLEND );
  glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

  if (texturaFundoJogo02 == 0) //verifica se a textura carregou corretamente
  {
     printf("Erro do SOIL 7: '%s'\n", SOIL_last_result());
  }
 //TEXTURA FUNDO JOGO

 //TEXTURA BASE POUSO
texturaBasePouso = SOIL_load_OGL_texture(
   "./texturas/Base-Pouso.png",
   SOIL_LOAD_AUTO,
   SOIL_CREATE_NEW_ID,
  SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaBasePouso == 0) //verifica se a textura carregou corretamente
{
   printf("Erro do SOIL 20: '%s'\n", SOIL_last_result());
}
//TEXTURA BASE POUSO

//TEXTURA MENU
menu_sem_escrita = SOIL_load_OGL_texture(
  "./texturas/Menu_sem_escrita.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (menu_sem_escrita == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 11: '%s'\n", SOIL_last_result());
}
//TEXTURA MENU

//TEXTURA SpriteSheet_Menu
SpriteSheet_Menu = SOIL_load_OGL_texture(
  "./texturas/SpriteSheet_Menu.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (SpriteSheet_Menu == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 12: '%s'\n", SOIL_last_result());
}
//TEXTURA SpriteSheet_Menu

//TEXTURA CONTROLES
texturaControles = SOIL_load_OGL_texture(
  "./texturas/Controle.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaControles == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 13: '%s'\n", SOIL_last_result());
}
//TEXTURA CONTROLES

//TEXTURA SPACEBAR
texturaPressSpacebarToContinue = SOIL_load_OGL_texture(
  "./texturas/PressSpacebarToContinue.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaPressSpacebarToContinue == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 14: '%s'\n", SOIL_last_result());
}
//TEXTURA SPACEBAR

//TEXTURA CREDITOS
texturaCreditos = SOIL_load_OGL_texture(
  "./texturas/creditos.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaCreditos == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 15: '%s'\n", SOIL_last_result());
}
//TEXTURA CREDITOS

//TEXTURA SCORE
texturaScore = SOIL_load_OGL_texture(
  "./texturas/Score.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaScore == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 15: '%s'\n", SOIL_last_result());
}
//TEXTURA SCORE

      //TEXTURAS ONE SWITCH

//TEXTURA SCORE
texturaScoreOneSwitch = SOIL_load_OGL_texture(
  "./texturas/TOPSCOREOneSwitch.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaScoreOneSwitch == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 26: '%s'\n", SOIL_last_result());
}
//TEXTURA SCORE

//TEXTURA CREDITOS
texturaCreditosOneSwitch = SOIL_load_OGL_texture(
  "./texturas/creditoOneSwitch.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaCreditosOneSwitch == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 25: '%s'\n", SOIL_last_result());
}
//TEXTURA CREDITOS

//TEXTURA CONTROLES
texturaControlesOneSwitch = SOIL_load_OGL_texture(
  "./texturas/ControleOneSwitch.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaControlesOneSwitch == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 13: '%s'\n", SOIL_last_result());
}
//TEXTURA CONTROLES

//TEXTURA MENU
texturaMenuOneSwitch = SOIL_load_OGL_texture(
  "./texturas/MenuOneSwitch.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (texturaMenuOneSwitch == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 30: '%s'\n", SOIL_last_result());
}
//TEXTURA MENU

   //TEXTURA DERROTA
  texturaDerrotaOneSwitch = SOIL_load_OGL_texture(
       "./texturas/DerrotaOneSwitch.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaDerrotaOneSwitch == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 5: '%s'\n", SOIL_last_result());
    }
    //TEXTURA DERROTA

 //TEXTURA SpriteDERROTA
SpriteDerrota = SOIL_load_OGL_texture(
  "./texturas/Sprite_derrota.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (SpriteDerrota == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 1: '%s'\n", SOIL_last_result());
}

//SPRITE DERROTA

 //TEXTURA VITORIA
SpriteVitoria = SOIL_load_OGL_texture(
  "./texturas/Sprite_vitoria.png",
  SOIL_LOAD_AUTO,
  SOIL_CREATE_NEW_ID,
 SOIL_FLAG_INVERT_Y
);

glEnable( GL_BLEND );
glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

if (SpriteVitoria == 0) //verifica se a textura carregou corretamente
{
  printf("Erro do SOIL 1: '%s'\n", SOIL_last_result());
}

//SPRITE VITORIA

//textura vitoria


  texturaVitoriaOneSwitch = SOIL_load_OGL_texture(
       "./texturas/VitoriaOneSwitch.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaVitoriaOneSwitch == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 5: '%s'\n", SOIL_last_result());
    }
    //TEXTURA VITORIA

   //PRE JOGO


  texturaPreJogo = SOIL_load_OGL_texture(
       "./texturas/PreJogo.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaPreJogo == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 1: '%s'\n", SOIL_last_result());
    }
//PRE JOGO

    //SPRITE PRE JOGO


  SpritePreJogo = SOIL_load_OGL_texture(
       "./texturas/SpritePre.png",
       SOIL_LOAD_AUTO,
       SOIL_CREATE_NEW_ID,
      SOIL_FLAG_INVERT_Y
   );

    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (SpritePreJogo == 0) //verifica se a textura carregou corretamente
    {
       printf("Erro do SOIL 1: '%s'\n", SOIL_last_result());
    }
//SPRITE PRE JOGO




        //TEXTURAS ONE SWITCH

}
