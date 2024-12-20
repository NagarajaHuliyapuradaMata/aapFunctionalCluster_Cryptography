#pragma once
/******************************************************************************/
/* File   : interface_Cryptography.hpp                                        */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class interface_Cryptography{
   public:
      virtual void GenerateRandomData     (void) = 0;
      virtual void GetSecureCounter       (void) = 0;
      virtual void LoadCryptoProvider     (void) = 0;
      virtual void LoadKeyStorageProvider (void) = 0;
      virtual void LoadX509Provider       (void) = 0;
      virtual void GetBlockSize           (void) = 0;
      virtual void GetMaxInputSize        (void) = 0;
      virtual void GetMaxOutputSize       (void) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
