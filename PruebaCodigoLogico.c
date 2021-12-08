#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include <glib.h>

int i;
int posiciones_cuadricula[9];


void on_clicked_1_1(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1x1 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/X (1).png");
    g_print("Boton 1x1 Clicked\n");
    posiciones_cuadricula[0] = 1;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_1x1, image);
    gtk_label_set_text(label, "Boton 1x1");
}

void on_clicked_1_2(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1x2 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/O (1).png");
    gtk_label_set_text(label, "Boton 1x2");
    g_print("Boton 1x2 Clicked\n");
    posiciones_cuadricula[1] = 2;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_1x2, image);

}

void on_clicked_1_3(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1x3 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/X (1).png");
    gtk_label_set_text(label, "Boton 1x3");
    g_print("Boton 1x3 Clicked\n");
    posiciones_cuadricula[2] = 3;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_1x3, image);
}

void on_clicked_2_1(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2x1 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/O (1).png");
    gtk_label_set_text(label, "Boton 2x1");
    g_print("Boton 2x1 Clicked\n");
    posiciones_cuadricula[3] = 4;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_2x1, image);
}

void on_clicked_2_2(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2x2 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/X (1).png");
    gtk_label_set_text(label, "Boton 2x2");
    g_print("Boton 2x2 Clicked\n");
    posiciones_cuadricula[4] = 5;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_2x2, image);
}

void on_clicked_2_3(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2x3 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/X (1).png");
    gtk_label_set_text(label, "Boton 2x3");
    g_print("Boton 2x3 Clicked\n");
    posiciones_cuadricula[5] = 6;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_2x3, image);
}

void on_clicked_3_1(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3x1 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/O (1).png");
    gtk_label_set_text(label, "Boton 3x1");
    g_print("Boton 3x1 Clicked\n");
    posiciones_cuadricula[6] = 7;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_3x1, image);
}

void on_clicked_3_2(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3x2 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/X (1).png");
    gtk_label_set_text(label, "Boton 3x2");
    g_print("Boton 3x2 Clicked\n");
    posiciones_cuadricula[7] = 8;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_3x2, image);
}

void on_clicked_3_3(GtkWidget *widget, GtkButton *button, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3x3 = (GtkButton*) data;
    GtkWidget *image = gtk_image_new_from_file("/home/jsolis2308/Downloads/O (1).png");
    gtk_label_set_text(label, "Boton 3x3");
    g_print("Boton 3x3 Clicked\n");
    posiciones_cuadricula[8] = 9;
    for (i=0; i<9; i++){
      g_print("%d \n", posiciones_cuadricula[i]) ;
      }
    gtk_button_set_image(button_3x3, image);
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
    builder = gtk_builder_new_from_file(
        "//home/jsolis2308/Desktop/ProyectoC-Grupo-8/Archivos_de_Prueba/Prueba.glade");

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
    // Show and start main loop
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
