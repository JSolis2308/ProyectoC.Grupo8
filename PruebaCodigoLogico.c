#include <stdio.h>
#include <gtk/gtk.h>


int i;
//variable que controla si juega la persona 1 o la persona 2
int turno = 0;
//lista que contiene la informacion de si cada boton tiene una x, una o, o está sin letra
char posiciones_cuadricula[9];
//variable necesaria para el reseteo (se escribe en 1 cuando se solicita reseteo)
int reset = 0;
//variable fija necesaria para ejecutar el loop main de gtk
int loop = 1;
/*
variable que indica quien es el ganador
 =2 -> ganó O
 =1 -> ganó X
 =0 -> nadie ha ganado
*/
int ganador = 0;

//funcoin winn: Función que revisa las casillas y con base en cuales estan marcadas
//dice cuál jugador ganó
void winn(){

  if (posiciones_cuadricula[0]==posiciones_cuadricula[1] &&
      posiciones_cuadricula[1]==posiciones_cuadricula[2] &&
      posiciones_cuadricula[2]!=0){
        ganador = posiciones_cuadricula[2];

  }else if(posiciones_cuadricula[3] == posiciones_cuadricula[4] &&
           posiciones_cuadricula[4] == posiciones_cuadricula[5] &&
           posiciones_cuadricula[5] != 0){
             ganador = posiciones_cuadricula[5];

  }else if(posiciones_cuadricula[6] == posiciones_cuadricula[7] &&
           posiciones_cuadricula[7] == posiciones_cuadricula[8] &&
           posiciones_cuadricula[8] !=0){
             ganador = posiciones_cuadricula[8];

  }else if(posiciones_cuadricula[0] == posiciones_cuadricula[3] &&
           posiciones_cuadricula[3] == posiciones_cuadricula[6] &&
           posiciones_cuadricula[6] !=0){
             ganador = posiciones_cuadricula[6];

  }else if(posiciones_cuadricula[1] == posiciones_cuadricula[4] &&
           posiciones_cuadricula[4] == posiciones_cuadricula[7] &&
           posiciones_cuadricula[7] != 0){
             ganador = posiciones_cuadricula[7];

  }else if(posiciones_cuadricula[2] == posiciones_cuadricula[5] &&
           posiciones_cuadricula[5] == posiciones_cuadricula[8] &&
           posiciones_cuadricula[8] != 0){
             ganador = posiciones_cuadricula[8];

  }else if(posiciones_cuadricula[0] == posiciones_cuadricula[4] &&
           posiciones_cuadricula[4] == posiciones_cuadricula[8] &&
           posiciones_cuadricula[8] != 0){
             ganador = posiciones_cuadricula[8];

  }else if(posiciones_cuadricula[2] == posiciones_cuadricula[4] &&
           posiciones_cuadricula[4] == posiciones_cuadricula[6] &&
           posiciones_cuadricula[6] != 0){
             ganador = posiciones_cuadricula[6];
  }
}


void on_clicked_1_1(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1x1 = (GtkButton*) data;
    g_print("Boton 1x1 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[0] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[0] = 1;
      gtk_button_set_image(button_1x1, image);
      turno = turno + 1;
      winn();
    }

    else if(turno%2 != 0 && posiciones_cuadricula[0] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      gtk_button_set_image(button_1x1, image);
      posiciones_cuadricula[0] = 2;
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_1_2(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1x2 = (GtkButton*) data;
    g_print("Boton 1x2 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[1] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[1] = 1;
      gtk_button_set_image(button_1x2, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[1] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[1] = 2;
      gtk_button_set_image(button_1x2, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_1_3(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1x3 = (GtkButton*) data;
    g_print("Boton 1x3 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[2] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[2] = 1;
      gtk_button_set_image(button_1x3, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[2] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[2] = 2;
      gtk_button_set_image(button_1x3, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_2_1(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2x1 = (GtkButton*) data;
    g_print("Boton 2x1 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[3] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[3] = 1;
      gtk_button_set_image(button_2x1, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[3] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[3] = 2;
      gtk_button_set_image(button_2x1, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_2_2(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2x2 = (GtkButton*) data;
    g_print("Boton 2x2 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[4] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[4] = 1;
      gtk_button_set_image(button_2x2, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[4] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[4] = 2;
      gtk_button_set_image(button_2x2, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_2_3(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2x3 = (GtkButton*) data;
    g_print("Boton 2x3 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[5] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[5] = 1;
      gtk_button_set_image(button_2x3, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[5] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[5] = 2;
      gtk_button_set_image(button_2x3, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_3_1(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3x1 = (GtkButton*) data;
    g_print("Boton 3x1 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[6] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[6] = 1;
      gtk_button_set_image(button_3x1, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[6] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[6] = 2;
      gtk_button_set_image(button_3x1, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_3_2(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3x2 = (GtkButton*) data;
    g_print("Boton 3x2 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[7] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[7] = 1;
      gtk_button_set_image(button_3x2, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[7] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[7] = 2;
      gtk_button_set_image(button_3x2, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_3_3(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3x3 = (GtkButton*) data;
    g_print("Boton 3x3 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[8] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[8] = 1;
      gtk_button_set_image(button_3x3, image);
      turno = turno + 1;
      winn();
    }
    else if(turno%2 != 0 && posiciones_cuadricula[8] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[8] = 2;
      gtk_button_set_image(button_3x3, image);
      turno = turno + 1;
      winn();
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

//función que hace la solicitud de reseteo (reset=1) cuando se presiona el boton "reiniciar"
void on_clicked_reset(GtkWidget *widget, gpointer data) {
  reset = 1;
  }

//función para cerrar la ventana del ganador y reiniciar la partida
void cerrar(GtkWidget *widget, gpointer data){
  GtkWidget *window = (GtkWidget*) data;
  gtk_widget_hide_on_delete(window);
  ganador = 0;
  reset = 1;
}



int main(int argc, char* argv[]) {
    GtkBuilder *builder;
    GtkWidget *window;
    GtkButton *button_1x1;
    GtkButton *button_1x2;
    GtkButton *button_1x3;
    GtkButton *button_2x1;
    GtkButton *button_2x2;
    GtkButton *button_2x3;
    GtkButton *button_3x1;
    GtkButton *button_3x2;
    GtkButton *button_3x3;
    GtkWidget *quit_button;
    GtkWidget *reset_button;
    GtkWidget *label;
    GtkWidget *window_ganador;
    GtkWidget *label_ganador;
    GtkButton *boton_de_ganador;

    gtk_init(&argc, &argv);

    // Get GUI from file
    builder = gtk_builder_new_from_file("Interfaz.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "Ventana Principal"));
    g_signal_connect(window, "destroy", G_CALLBACK(exit), NULL);

    button_1x1 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_1_1"));
    button_1x2 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_1_2"));
    button_1x3 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_1_3"));
    button_2x1 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_2_1"));
    button_2x2 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_2_2"));
    button_2x3 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_2_3"));
    button_3x1 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_3_1"));
    button_3x2 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_3_2"));
    button_3x3 = GTK_BUTTON(gtk_builder_get_object(builder, "Boton_3_3"));
    quit_button = GTK_WIDGET(gtk_builder_get_object(builder, "Quit_Button"));
    reset_button = GTK_WIDGET(gtk_builder_get_object(builder, "Reset_Button"));
    label = GTK_WIDGET(gtk_builder_get_object(builder, "label_1"));



    window_ganador = GTK_WIDGET(gtk_builder_get_object(builder,"Ventana_de_ganador"));
    g_signal_connect(window_ganador, "destroy", G_CALLBACK(gtk_widget_hide_on_delete), NULL);


    label_ganador = GTK_WIDGET(gtk_builder_get_object(builder, "label_de_ganador"));
    boton_de_ganador = GTK_BUTTON(gtk_builder_get_object(builder, "boton_de_ganador"));




    g_signal_connect(button_1x1, "clicked", G_CALLBACK(on_clicked_1_1), label);
    g_signal_connect(button_1x2, "clicked", G_CALLBACK(on_clicked_1_2), label);
    g_signal_connect(button_1x3, "clicked", G_CALLBACK(on_clicked_1_3), label);
    g_signal_connect(button_2x1, "clicked", G_CALLBACK(on_clicked_2_1), label);
    g_signal_connect(button_2x2, "clicked", G_CALLBACK(on_clicked_2_2), label);
    g_signal_connect(button_2x3, "clicked", G_CALLBACK(on_clicked_2_3), label);
    g_signal_connect(button_3x1, "clicked", G_CALLBACK(on_clicked_3_1), label);
    g_signal_connect(button_3x2, "clicked", G_CALLBACK(on_clicked_3_2), label);
    g_signal_connect(button_3x3, "clicked", G_CALLBACK(on_clicked_3_3), label);
    g_signal_connect(quit_button, "clicked", G_CALLBACK(exit), NULL);
    g_signal_connect(reset_button, "clicked", G_CALLBACK(on_clicked_reset), label);






//GtkWidget *image = gtk_image_new_from_file("X (1).png");

//bucle de la Ventana
//dentro del bucle se revisa si se solicitó un reseteo de las piezas ()
gtk_widget_show_all(window);
  while (loop = 1){
    if (reset == 1){

      //se le cambia la imagen a los botones, por la imagen transparente recien cargada
      GtkWidget *img_trans_1x1 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_1x1, img_trans_1x1);
      GtkWidget *img_trans_1x2 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_1x2, img_trans_1x2);
      GtkWidget *img_trans_1x3 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_1x3, img_trans_1x3);
      GtkWidget *img_trans_2x1 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_2x1, img_trans_2x1);
      GtkWidget *img_trans_2x2 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_2x2, img_trans_2x2);
      GtkWidget *img_trans_2x3 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_2x3, img_trans_2x3);
      GtkWidget *img_trans_3x1 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_3x1, img_trans_3x1);
      GtkWidget *img_trans_3x2 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_3x2, img_trans_3x2);
      GtkWidget *img_trans_3x3 = gtk_image_new_from_file("imagen_transparente.png");
      gtk_button_set_image(button_3x3, img_trans_3x3);

      //se cambian todos los elementos en posiciones_cuadricula a 0 para empezar el juego desde cero
      posiciones_cuadricula[0]=0;
      posiciones_cuadricula[1]=0;
      posiciones_cuadricula[2]=0;
      posiciones_cuadricula[3]=0;
      posiciones_cuadricula[4]=0;
      posiciones_cuadricula[5]=0;
      posiciones_cuadricula[6]=0;
      posiciones_cuadricula[7]=0;
      posiciones_cuadricula[8]=0;
      reset = 0;

    }else{
      if(ganador == 2){

        gtk_widget_show_all(window_ganador);
        GtkWidget *img_ganador_O = gtk_image_new_from_file("O (1).png");
        gtk_button_set_image(boton_de_ganador, img_ganador_O);
        gtk_main_iteration();

      }else if(ganador == 1){

        gtk_widget_show_all(window_ganador);
        GtkWidget *img_ganador_X = gtk_image_new_from_file("X (1).png");
        gtk_button_set_image(boton_de_ganador, img_ganador_X);
        gtk_main_iteration();


      }
      gtk_main_iteration();
    }
  }
    return 0;
}
