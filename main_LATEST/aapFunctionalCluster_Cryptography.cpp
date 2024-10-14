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
#include "interface_Cryptography_StreamCipherCtx.hpp"
#include "interface_Cryptography_BlockService.hpp"
#include "interface_Cryptography_EncryptorPrivateCtx.hpp"
#include "interface_Cryptography_DecryptorPrivateCtx.hpp"
#include "interface_Cryptography_SymmetricBlockCipherCtx.hpp"
#include "interface_Cryptography_AuthCipherCtx.hpp"
#include "interface_Cryptography_HashFunctionCtx.hpp"
#include "interface_Cryptography_MessageAuthnCodeCtx.hpp"
#include "interface_Cryptography_DigestService.hpp"

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
   ,  public interface_Cryptography_StreamCipherCtx
   ,  public interface_Cryptography_BlockService
   ,  public interface_Cryptography_EncryptorPrivateCtx
   ,  public interface_Cryptography_DecryptorPrivateCtx
   ,  public interface_Cryptography_SymmetricBlockCipherCtx
   ,  public interface_Cryptography_AuthCipherCtx
   ,  public interface_Cryptography_HashFunctionCtx
   ,  public interface_Cryptography_MessageAuthnCodeCtx
   ,  public interface_Cryptography_DigestService
{
   public:
      void GenerateRandomData              (void);
      void GetSecureCounter                (void);
      void LoadCryptoProvider              (void);
      void LoadKeyStorageProvider          (void);
      void LoadX509Provider                (void);
      void GetBlockSize                    (void);
      void GetMaxInputSize                 (void);
      void GetMaxOutputSize                (void);
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
      void CountBytesInCache               (void);
      void EstimateMaxInputSize            (void);
      void EstimateRequiredCapacity        (void);
      void FinishBytes                     (void);
      void GetBlockService                 (void);
      void GetTransformation               (void);
      void IsBytewiseMode                  (void);
      void IsSeekableMode                  (void);
      void ProcessBlocks                   (void);
      void ProcessBytes                    (void);
      void Reset                           (void);
      void Seek                            (void);
      void SetKey                          (void);
      void Start                           (void);
      void GetActualIvBitLength            (void);
/*
      void GetBlockSize                    (void);
*/
      void GetIvSize                       (void);
      void IsValidIvSize                   (void);

      void GetCryptoService                (void);
      void ProcessBlock                    (void);
/*
      void Reset                           (void);
      void SetKey                          (void);
*/
/*
      void GetCryptoService                (void);
      void ProcessBlock                    (void);
      void Reset                           (void);
      void SetKey                          (void);
*/
/*
      void GetCryptoService                (void;
      void GetTransformation               (void);
      void ProcessBlock                    (void);
      void ProcessBlocks                   (void);
      void Reset                           (void);
      void SetKey                          (void);
*/
      void Check                           (void);
      void GetDigest                       (void);
      void GetDigestService                (void);
      void GetMaxAssociatedDataSize        (void);
/*
      void GetTransformation               (void);
*/
      void ProcessConfidentialData         (void);
/*
      void Reset                           (void);
      void SetKey                          (void);
      void Start                           (void);
*/
      void UpdateAssociatedData            (void);

      void Finish                          (void);
/*
      void GetDigest                       (void);
      void GetDigestService                (void);
      void Start                           (void);
*/
      void Update                          (void);

/*
      void Check                           (void);
      void Finish                          (void);
      void GetDigest                       (void);
      void GetDigestService                (void);
      void Reset                           (void);
      void SetKey                          (void);
      void Start                           (void);
      void Update                          (void);
*/

      void Compare                         (void);
      void GetDigestSize                   (void);
      void IsFinished                      (void);
      void IsStarted                       (void);
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

void aapFunctionalCluster_Cryptography::GetBlockSize(void){
}

void aapFunctionalCluster_Cryptography::GetMaxInputSize(void){
}

void aapFunctionalCluster_Cryptography::GetMaxOutputSize(void){
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

void aapFunctionalCluster_Cryptography::CountBytesInCache(void){
}

void aapFunctionalCluster_Cryptography::EstimateMaxInputSize(void){
}

void aapFunctionalCluster_Cryptography::EstimateRequiredCapacity(void){
}

void aapFunctionalCluster_Cryptography::FinishBytes(void){
}

void aapFunctionalCluster_Cryptography::GetBlockService(void){
}

void aapFunctionalCluster_Cryptography::GetTransformation(void){
}

void aapFunctionalCluster_Cryptography::IsBytewiseMode(void){
}

void aapFunctionalCluster_Cryptography::IsSeekableMode(void){
}

void aapFunctionalCluster_Cryptography::ProcessBlocks(void){
}

void aapFunctionalCluster_Cryptography::ProcessBytes(void){
}

void aapFunctionalCluster_Cryptography::Reset(void){
}

void aapFunctionalCluster_Cryptography::Seek(void){
}

void aapFunctionalCluster_Cryptography::SetKey(void){
}

void aapFunctionalCluster_Cryptography::Start(void){
}

void aapFunctionalCluster_Cryptography::GetActualIvBitLength(void){
}

/*
void aapFunctionalCluster_Cryptography::GetBlockSize(void){
}
*/

void aapFunctionalCluster_Cryptography::GetIvSize(void){
}

void aapFunctionalCluster_Cryptography::IsValidIvSize(void){
}

void aapFunctionalCluster_Cryptography::GetCryptoService(void){
}

void aapFunctionalCluster_Cryptography::ProcessBlock(void){
}

/*
void aapFunctionalCluster_Cryptography::Reset(void){
}

void aapFunctionalCluster_Cryptography::SetKey(void){
}
*/

/*
void aapFunctionalCluster_Cryptography::GetCryptoService(void){
}

void aapFunctionalCluster_Cryptography::ProcessBlock(void){
}

void aapFunctionalCluster_Cryptography::Reset(void){
}

void aapFunctionalCluster_Cryptography::SetKey(void){
}
*/

/*
void aapFunctionalCluster_Cryptography::GetCryptoService(void{
}

void aapFunctionalCluster_Cryptography::GetTransformation(void){
}

void aapFunctionalCluster_Cryptography::ProcessBlock(void){
}

void aapFunctionalCluster_Cryptography::ProcessBlocks(void){
}

void aapFunctionalCluster_Cryptography::Reset(void){
}

void aapFunctionalCluster_Cryptography::SetKey(void){
}
*/

void aapFunctionalCluster_Cryptography::Check(void){
}

void aapFunctionalCluster_Cryptography::GetDigest(void){
}

void aapFunctionalCluster_Cryptography::GetDigestService(void){
}

void aapFunctionalCluster_Cryptography::GetMaxAssociatedDataSize(void){
}

/*
void aapFunctionalCluster_Cryptography::GetTransformation(void){
}
*/

void aapFunctionalCluster_Cryptography::ProcessConfidentialData(void){
}

/*
void aapFunctionalCluster_Cryptography::Reset(void){
}

void aapFunctionalCluster_Cryptography::SetKey(void){
}

void aapFunctionalCluster_Cryptography::Start(void){
}
*/

void aapFunctionalCluster_Cryptography::UpdateAssociatedData(void){
}

void aapFunctionalCluster_Cryptography::Finish(void){
}

/*
void aapFunctionalCluster_Cryptography::GetDigest(void){
}

void aapFunctionalCluster_Cryptography::GetDigestService(void){
}

void aapFunctionalCluster_Cryptography::Start(void){
}
*/

void aapFunctionalCluster_Cryptography::Update(void){
}

/*
void aapFunctionalCluster_Cryptography::Check(void){
}

void aapFunctionalCluster_Cryptography::Finish(void){
}

void aapFunctionalCluster_Cryptography::GetDigest(void){
}

void aapFunctionalCluster_Cryptography::GetDigestService(void){
}

void aapFunctionalCluster_Cryptography::Reset(void){
}

void aapFunctionalCluster_Cryptography::SetKey(void){
}

void aapFunctionalCluster_Cryptography::Start(void){
}

void aapFunctionalCluster_Cryptography::Update(void){
}
*/

void aapFunctionalCluster_Cryptography::Compare(void){
}

void aapFunctionalCluster_Cryptography::GetDigestSize(void){
}

void aapFunctionalCluster_Cryptography::IsFinished(void){
}

void aapFunctionalCluster_Cryptography::IsStarted(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
