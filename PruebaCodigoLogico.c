#include <stdio.h>
#include <gtk/gtk.h>


int i;
int turno = 0;
char posiciones_cuadricula[9];


void on_clicked_1_1(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1x1 = (GtkButton*) data;
    g_print("Boton 1x1 Clicked\n");
    if (turno%2 == 0 && posiciones_cuadricula[0] == 0){
      GtkWidget *image = gtk_image_new_from_file("X (1).png");
      posiciones_cuadricula[0] = 1;
      gtk_button_set_image(button_1x1, image);
      turno = turno + 1;
    }
    else if(turno%2 != 0 && posiciones_cuadricula[0] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[0] = 2;
      gtk_button_set_image(button_1x1, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[1] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[1] = 2;
      gtk_button_set_image(button_1x2, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[2] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[2] = 2;
      gtk_button_set_image(button_1x3, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[3] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[3] = 2;
      gtk_button_set_image(button_2x1, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[4] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[4] = 2;
      gtk_button_set_image(button_2x2, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[5] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[5] = 2;
      gtk_button_set_image(button_2x3, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[6] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[6] = 2;
      gtk_button_set_image(button_3x1, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[7] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[7] = 2;
      gtk_button_set_image(button_3x2, image);
      turno = turno + 1;
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
    }
    else if(turno%2 != 0 && posiciones_cuadricula[8] != 1){
      GtkWidget *image = gtk_image_new_from_file("O (1).png");
      posiciones_cuadricula[8] = 2;
      gtk_button_set_image(button_3x3, image);
      turno = turno + 1;
    }
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
    }
}

void on_clicked_reset(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Iniciar Juego. \n Turno de X");
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

    gtk_init(&argc, &argv);

    // Get GUI from file
    builder = gtk_builder_new_from_file("Interfaz.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "Ventana Principal"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

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

    g_signal_connect(button_1x1, "clicked", G_CALLBACK(on_clicked_1_1), label);
    g_signal_connect(button_1x2, "clicked", G_CALLBACK(on_clicked_1_2), label);
    g_signal_connect(button_1x3, "clicked", G_CALLBACK(on_clicked_1_3), label);
    g_signal_connect(button_2x1, "clicked", G_CALLBACK(on_clicked_2_1), label);
    g_signal_connect(button_2x2, "clicked", G_CALLBACK(on_clicked_2_2), label);
    g_signal_connect(button_2x3, "clicked", G_CALLBACK(on_clicked_2_3), label);
    g_signal_connect(button_3x1, "clicked", G_CALLBACK(on_clicked_3_1), label);
    g_signal_connect(button_3x2, "clicked", G_CALLBACK(on_clicked_3_2), label);
    g_signal_connect(button_3x3, "clicked", G_CALLBACK(on_clicked_3_3), label);
    g_signal_connect(quit_button, "clicked", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(reset_button, "clicked", G_CALLBACK(on_clicked_reset), label);
    // Show and start main loop
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
