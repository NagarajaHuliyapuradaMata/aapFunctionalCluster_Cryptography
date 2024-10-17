#pragma once
/******************************************************************************/
/* File   : interface_Cryptography_X509Provider.hpp                           */
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
class interface_Cryptography_X509Provider{
   public:
      virtual void BuildDn                   (void) = 0;
      virtual void CheckCertStatus           (void) = 0;
      virtual void CheckCertStatusOnline     (void) = 0;
      virtual void CleanupVolatileStorage    (void) = 0;
      virtual void CountCertsInChain         (void) = 0;
      virtual void CreateCertSignRequest     (void) = 0;
      virtual void CreateEmptyDn             (void) = 0;
      virtual void CreateEmptyExtensions     (void) = 0;
      virtual void CreateOcspRequest         (void) = 0;
      virtual void DecodeDn                  (void) = 0;
      virtual void FindCertByDn              (void) = 0;
      virtual void FindCertByKeyIds          (void) = 0;
      virtual void FindCertBySn              (void) = 0;
      virtual void Import                    (void) = 0;
      virtual void ImportCrl                 (void) = 0;
      virtual void LoadCertificate           (void) = 0;
      virtual void ParseCert                 (void) = 0;
      virtual void ParseCertChain            (void) = 0;
      virtual void ParseCertSignRequest      (void) = 0;
      virtual void ParseCustomCertExtensions (void) = 0;
      virtual void ParseOcspResponse         (void) = 0;
      virtual void Remove                    (void) = 0;
      virtual void SendRequest               (void) = 0;
      virtual void SetAsRootOfTrust          (void) = 0;
      virtual void SetPendingStatus          (void) = 0;
      virtual void UpdateCrlOnline           (void) = 0;
      virtual void VerifyCert                (void) = 0;
      virtual void VerifyCertChain           (void) = 0;
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
