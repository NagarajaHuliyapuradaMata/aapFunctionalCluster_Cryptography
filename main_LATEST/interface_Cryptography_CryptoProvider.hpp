#pragma once
/******************************************************************************/
/* File   : interface_Cryptography_CryptoProvider.hpp                         */
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
class interface_Cryptography_CryptoProvider{
   public:
      virtual void AllocVolatileContainer          (void) = 0;
      virtual void ConvertToAlgId                  (void) = 0;
      virtual void ConvertToAlgName                (void) = 0;
      virtual void CreateAuthCipherCtx             (void) = 0;
      virtual void CreateDecryptorPrivateCtx       (void) = 0;
      virtual void CreateEncryptorPublicCtx        (void) = 0;
      virtual void CreateHashDigest                (void) = 0;
      virtual void CreateHashFunctionCtx           (void) = 0;
      virtual void CreateKeyAgreementPrivateCtx    (void) = 0;
      virtual void CreateKeyDecapsulatorPrivateCtx (void) = 0;
      virtual void CreateKeyDerivationFunctionCtx  (void) = 0;
      virtual void CreateKeyEncapsulatorPublicCtx  (void) = 0;
      virtual void CreateMessageAuthCodeCtx        (void) = 0;
      virtual void CreateMsgRecoveryPublicCtx      (void) = 0;
      virtual void CreateRandomGeneratorCtx        (void) = 0;
      virtual void CreateSigEncodePrivateCtx       (void) = 0;
      virtual void CreateSignature                 (void) = 0;
      virtual void CreateSignerPrivateCtx          (void) = 0;
      virtual void CreateStreamCipherCtx           (void) = 0;
      virtual void CreateSymmetricBlockCipherCtx   (void) = 0;
      virtual void CreateSymmetricKeyWrapperCtx    (void) = 0;
      virtual void CreateVerifierPublicCtx         (void) = 0;
      virtual void ExportPublicObject              (void) = 0;
      virtual void ExportSecuredObject             (void) = 0;
      virtual void GeneratePrivateKey              (void) = 0;
      virtual void GenerateSeed                    (void) = 0;
      virtual void GenerateSymmetricKey            (void) = 0;
      virtual void GetPayloadStorageSize           (void) = 0;
      virtual void GetSerializedSize               (void) = 0;
      virtual void ImportPublicObject              (void) = 0;
      virtual void ImportSecuredObject             (void) = 0;
      virtual void LoadObject                      (void) = 0;
      virtual void LoadPrivateKey                  (void) = 0;
      virtual void LoadPublicKey                   (void) = 0;
      virtual void LoadSecretSeed                  (void) = 0;
      virtual void LoadSymmetricKey                (void) = 0;
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
