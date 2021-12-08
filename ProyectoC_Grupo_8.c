/*
Proyecto de programacion para el curso Programacion Bajo Plataformas Abiertas
de la Universidad de Costa Rica en lenguaje de programacion C destinado a la
recreacion del videojuego Tic Tac Toe (Juego de Gato). Para la creación de este
código fue utilizada la distribución de Ubuntu 18.04/20.04.

Autores: Johan Solis Soto  C07686
         Sergio Camacho B91476
	 Mario Navarro Bejarano B75398
*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

void on_clicked_B_1_1(GtkWidget *widget, gpointer data){
  GtkButton* Button = (GtkButton*) widget;
  gtk_image_set_icon_name(Button, "gtk-close");
}



int main(int argc, char* argv[]){
  GtkBuilder *builder;
  GtkWidget *window;
  GtkWidget *Boton_1_1;

  gtk_init(&argc, &argv);

  builder = gtk_builder_new_from_file(
    "Prueba.glade"
  );
  //obtener ventana principal
  window = GTK_WIDGET(
    gtk_builder_get_object(builder,"Ventana Principal")
  );

  //obtener botones
  Boton_1_1 = GTK_WIDGET(
    gtk_builder_get_object(builder,"Boton_1_1")
  );

  //hacer click en botones
  g_signal_connect(Boton_1_1, "clicked", G_CALLBACK(on_clicked_B_1_1), NULL);

  //cerrar ventana
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  //mostrar la ventana
  gtk_widget_show_all(window);
  gtk_main();
  return 0;
}
