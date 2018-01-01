/*******************************************************************************
 Simple SPI Transfer function

  File Name:
    drv_spi.h

  Summary:
    .

  Description:
    .

  Remarks:
    
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2016 Microchip Technology Inc. and its subsidiaries.  
You may use this software and any derivatives exclusively with Microchip products. 
  
THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  
NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, 
INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, 
AND FITNESS FOR A PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, 
COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 

IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER 
RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED 
OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT ALLOWED BY LAW, 
MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE 
WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE TERMS.
 *******************************************************************************/
// DOM-IGNORE-END

#ifndef _DRV_SPI_H
#define	_DRV_SPI_H

#include <Arduino.h>
#include <string.h>

//========================================================//
#ifdef	__cplusplus
extern "C" {
  
#endif
void APP_ReceiveMessage_Tasks(void);
// Index to SPI channel
// Used when multiple MCP2517FD are connected to the same SPI interface, but with different CS    
#define DRV_CANFDSPI_INDEX_0         0
#define DRV_CANFDSPI_INDEX_1         1


#define MISO_PIN    12  
#define CLK_PIN     13
#define MOSI_PIN    11

const int slaveSelectPin = 10;
const int int_pin = 37;
const int int0_pin = 35;    // Requires SB1 be made
const int int1_pin = 36;    // Requries SB2 be made

 

//! SPI Initialization
    
void DRV_SPI_Initialize();

//! SPI Read/Write Transfer

int8_t DRV_SPI_TransferData(uint8_t spiSlaveDeviceIndex, uint8_t *SpiTxData, uint8_t *SpiRxData, uint16_t XferSize);



//========================================================//
#ifdef	__cplusplus
}
#endif
//========================================================//
#endif	/* _DRV_SPI_H */

