#include <stdio.h>
#include <gtk/gtk.h>

void on_clicked_1_1(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 1x1");
    g_print("Boton 1x1 Clicked\n");
}

void on_clicked_1_2(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 1x2");
    g_print("Boton 1x2 Clicked\n");
}

void on_clicked_1_3(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 1x3");
    g_print("Boton 1x3 Clicked\n");
}

void on_clicked_2_1(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 2x1");
    g_print("Boton 2x1 Clicked\n");
}

void on_clicked_2_2(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 2x2");
    g_print("Boton 2x2 Clicked\n");
}

void on_clicked_2_3(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 2x3");
    g_print("Boton 2x3 Clicked\n");
}

void on_clicked_3_1(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 3x1");
    g_print("Boton 3x1 Clicked\n");
}

void on_clicked_3_2(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 3x2");
    g_print("Boton 3x2 Clicked\n");
}

void on_clicked_3_3(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "Boton 3x3");
    g_print("Boton 3x3 Clicked\n");
}


int main(int argc, char* argv[]) {
    GtkBuilder *builder;
    GtkWidget *window;
    GtkWidget *button_1x1;
    GtkWidget *button_1x2;
    GtkWidget *button_1x3;
    GtkWidget *button_2x1;
    GtkWidget *button_2x2;
    GtkWidget *button_2x3;
    GtkWidget *button_3x1;
    GtkWidget *button_3x2;
    GtkWidget *button_3x3;
    GtkWidget *label;

    gtk_init(&argc, &argv);

    // Get GUI from file
    builder = gtk_builder_new_from_file(
        "//home/jsolis2308/Desktop/ProyectoC-Grupo-8/Archivos_de_Prueba/Prueba.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "Ventana Principal"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    button_1x1 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_1_1"));
    button_1x2 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_1_2"));
    button_1x3 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_1_3"));
    button_2x1 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_2_1"));
    button_2x2 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_2_2"));
    button_2x3 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_2_3"));
    button_3x1 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_3_1"));
    button_3x2 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_3_2"));
    button_3x3 = GTK_WIDGET(gtk_builder_get_object(builder, "Boton_3_3"));
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
    // Show and start main loop
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
