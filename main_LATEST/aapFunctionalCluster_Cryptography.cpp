/******************************************************************************/
/* File   : aapFunctionalCluster_Cryptography.cpp                             */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_Cryptography.hpp"
#include "interface_Cryptography_IO.hpp"
#include "interface_Cryptography_Serializable.hpp"
#include "interface_Cryptography_VolatileTrustedContainer.hpp"
#include "interface_Cryptography_CryptoProvider.hpp"
#include "interface_Cryptography_CryptoContext.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_Cryptography:
      public interface_Cryptography
   ,  public interface_Cryptography_IO
   ,  public interface_Cryptography_Serializable
   ,  public interface_Cryptography_VolatileTrustedContainer
   ,  public interface_Cryptography_CryptoProvider
   ,  public interface_Cryptography_CryptoContext
{
   public:
      void GenerateRandomData              (void);
      void GetSecureCounter                (void);
      void LoadCryptoProvider              (void);
      void LoadKeyStorageProvider          (void);
      void LoadX509Provider                (void);
      void GetAllowedUsage                 (void);
      void GetCapacity                     (void);
      void GetCryptoObjectType             (void);
      void GetObjectId                     (void);
      void GetPayloadSize                  (void);
      void GetPrimitiveId                  (void);
      void GetTypeRestriction              (void);
      void IsObjectExportable              (void);
      void IsObjectSession                 (void);
      void IsValid                         (void);
      void IsVolatile                      (void);
      void IsWritable                      (void);
      void ExportPublicly                  (void);
      void GetIOInterface                  (void);
      void AllocVolatileContainer          (void);
      void ConvertToAlgId                  (void);
      void ConvertToAlgName                (void);
      void CreateAuthCipherCtx             (void);
      void CreateDecryptorPrivateCtx       (void);
      void CreateEncryptorPublicCtx        (void);
      void CreateHashDigest                (void);
      void CreateHashFunctionCtx           (void);
      void CreateKeyAgreementPrivateCtx    (void);
      void CreateKeyDecapsulatorPrivateCtx (void);
      void CreateKeyDerivationFunctionCtx  (void);
      void CreateKeyEncapsulatorPublicCtx  (void);
      void CreateMessageAuthCodeCtx        (void);
      void CreateMsgRecoveryPublicCtx      (void);
      void CreateRandomGeneratorCtx        (void);
      void CreateSigEncodePrivateCtx       (void);
      void CreateSignature                 (void);
      void CreateSignerPrivateCtx          (void);
      void CreateStreamCipherCtx           (void);
      void CreateSymmetricBlockCipherCtx   (void);
      void CreateSymmetricKeyWrapperCtx    (void);
      void CreateVerifierPublicCtx         (void);
      void ExportPublicObject              (void);
      void ExportSecuredObject             (void);
      void GeneratePrivateKey              (void);
      void GenerateSeed                    (void);
      void GenerateSymmetricKey            (void);
      void GetPayloadStorageSize           (void);
      void GetSerializedSize               (void);
      void ImportPublicObject              (void);
      void ImportSecuredObject             (void);
      void LoadObject                      (void);
      void LoadPrivateKey                  (void);
      void LoadPublicKey                   (void);
      void LoadSecretSeed                  (void);
      void LoadSymmetricKey                (void);
      void GetCryptoPrimitiveId            (void);
      void IsInitialized                   (void);
      void MyProvider                      (void);
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
void aapFunctionalCluster_Cryptography::GenerateRandomData(void){
}

void aapFunctionalCluster_Cryptography::GetSecureCounter(void){
}

void aapFunctionalCluster_Cryptography::LoadCryptoProvider(void){
}

void aapFunctionalCluster_Cryptography::LoadKeyStorageProvider(void){
}

void aapFunctionalCluster_Cryptography::LoadX509Provider(void){
}

void aapFunctionalCluster_Cryptography::GetAllowedUsage(void){
}

void aapFunctionalCluster_Cryptography::GetCapacity(void){
}

void aapFunctionalCluster_Cryptography::GetCryptoObjectType(void){
}

void aapFunctionalCluster_Cryptography::GetObjectId(void){
}

void aapFunctionalCluster_Cryptography::GetPayloadSize(void){
}

void aapFunctionalCluster_Cryptography::GetPrimitiveId(void){
}

void aapFunctionalCluster_Cryptography::GetTypeRestriction(void){
}

void aapFunctionalCluster_Cryptography::IsObjectExportable(void){
}

void aapFunctionalCluster_Cryptography::IsObjectSession(void){
}

void aapFunctionalCluster_Cryptography::IsValid(void){
}

void aapFunctionalCluster_Cryptography::IsVolatile(void){
}

void aapFunctionalCluster_Cryptography::IsWritable(void){
}

void aapFunctionalCluster_Cryptography::ExportPublicly(void){
}

void aapFunctionalCluster_Cryptography::GetIOInterface(void){
}

void aapFunctionalCluster_Cryptography::AllocVolatileContainer(void){
}

void aapFunctionalCluster_Cryptography::ConvertToAlgId(void){
}

void aapFunctionalCluster_Cryptography::ConvertToAlgName(void){
}

void aapFunctionalCluster_Cryptography::CreateAuthCipherCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateDecryptorPrivateCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateEncryptorPublicCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateHashDigest(void){
}

void aapFunctionalCluster_Cryptography::CreateHashFunctionCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateKeyAgreementPrivateCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateKeyDecapsulatorPrivateCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateKeyDerivationFunctionCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateKeyEncapsulatorPublicCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateMessageAuthCodeCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateMsgRecoveryPublicCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateRandomGeneratorCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateSigEncodePrivateCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateSignature(void){
}

void aapFunctionalCluster_Cryptography::CreateSignerPrivateCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateStreamCipherCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateSymmetricBlockCipherCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateSymmetricKeyWrapperCtx(void){
}

void aapFunctionalCluster_Cryptography::CreateVerifierPublicCtx(void){
}

void aapFunctionalCluster_Cryptography::ExportPublicObject(void){
}

void aapFunctionalCluster_Cryptography::ExportSecuredObject(void){
}

void aapFunctionalCluster_Cryptography::GeneratePrivateKey(void){
}

void aapFunctionalCluster_Cryptography::GenerateSeed(void){
}

void aapFunctionalCluster_Cryptography::GenerateSymmetricKey(void){
}

void aapFunctionalCluster_Cryptography::GetPayloadStorageSize(void){
}

void aapFunctionalCluster_Cryptography::GetSerializedSize(void){
}

void aapFunctionalCluster_Cryptography::ImportPublicObject(void){
}

void aapFunctionalCluster_Cryptography::ImportSecuredObject(void){
}

void aapFunctionalCluster_Cryptography::LoadObject(void){
}

void aapFunctionalCluster_Cryptography::LoadPrivateKey(void){
}

void aapFunctionalCluster_Cryptography::LoadPublicKey(void){
}

void aapFunctionalCluster_Cryptography::LoadSecretSeed(void){
}

void aapFunctionalCluster_Cryptography::LoadSymmetricKey(void){
}

void aapFunctionalCluster_Cryptography::GetCryptoPrimitiveId(void){
}

void aapFunctionalCluster_Cryptography::IsInitialized(void){
}

void aapFunctionalCluster_Cryptography::MyProvider(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
