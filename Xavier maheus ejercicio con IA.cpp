#include <iostream>
#include <iomanip> // Librería necesaria para formatear la salida (setw, setprecision)

using namespace std;

int main() {
    // --- DECLARACIÓN DE CONSTANTES ---
    // Usamos constantes para que el código sea fácil de actualizar si cambian los precios o tasas
    const float PRECIO_UNITARIO = 250.0;
    const float IVA_PORCENTAJE = 0.16;   // 16% de IVA
    const float DESC_PORCENTAJE = 0.05;  // 5% de descuento
    const float LIMITE_DESCUENTO = 1500.0;

    // --- DECLARACIÓN DE VARIABLES ---
    int cantidadProducto = 0;
    float subtotalBase = 0;
    float montoDescuento = 0;
    float subtotalConDescuento = 0;
    float montoIva = 0;
    float totalFactura = 0;

    // --- ENTRADA DE DATOS ---
    cout << "========================================" << endl;
    cout << "       SISTEMA DE FACTURACION" << endl;
    cout << "========================================" << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidadProducto;

    // --- PROCESAMIENTO DE CÁLCULOS ---

    // 1. Cálculo del subtotal inicial (precio base sin impuestos ni descuentos)
    subtotalBase = cantidadProducto * PRECIO_UNITARIO;

    // 2. Lógica de Descuento: 
    // Se evalúa si el subtotal supera el límite para aplicar el beneficio
    if (subtotalBase > LIMITE_DESCUENTO) {
        montoDescuento = subtotalBase * DESC_PORCENTAJE;
    } else {
        montoDescuento = 0; // Aseguramos que sea 0 si no aplica
    }

    // El enunciado indica que el descuento se aplica a la base disponible (antes de IVA)
    subtotalConDescuento = subtotalBase - montoDescuento;

    // 3. Cálculo del IVA sobre la base neta (después del descuento)
    montoIva = subtotalConDescuento * IVA_PORCENTAJE;

    // 4. Cálculo del monto final a pagar
    totalFactura = subtotalConDescuento + montoIva;

    // --- SALIDA DE DATOS (FACTURA FORMATEADA) ---
    // fixed y setprecision(2) aseguran que siempre se muestren dos decimales
    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "           DETALLE DE FACTURA           " << endl;
    cout << "========================================" << endl;
    
    // left y setw(25) alinean el texto a la izquierda en un espacio de 25 caracteres
    cout << left << setw(25) << "Cantidad de productos:" << cantidadProducto << endl;
    cout << left << setw(25) << "Precio Unitario:" << PRECIO_UNITARIO << " Bs" << endl;
    cout << "----------------------------------------" << endl;
    
    cout << left << setw(25) << "Subtotal Bruto:" << subtotalBase << " Bs" << endl;
    cout << left << setw(25) << "Descuento (5%):" << "- " << montoDescuento << " Bs" << endl;
    cout << "----------------------------------------" << endl;
    
    cout << left << setw(25) << "Base Imponible:" << subtotalConDescuento << " Bs" << endl;
    cout << left << setw(25) << "IVA (16%):" << "+ " << montoIva << " Bs" << endl;
    cout << "========================================" << endl;
    
    cout << left << setw(25) << "TOTAL A PAGAR:" << totalFactura << " Bs" << endl;
    cout << "========================================" << endl;
    cout << "      Gracias por su compra!" << endl;

    return 0;
}
