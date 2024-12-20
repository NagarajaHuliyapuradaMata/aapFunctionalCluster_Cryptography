#pragma once
/******************************************************************************/
/* File   : interface_Cryptography_Certificate.hpp                            */
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
class interface_Cryptography_Certificate{
   public:
      virtual void AuthorityKeyId (void) = 0;
      virtual void EndTime        (void) = 0;
      virtual void GetFingerprint (void) = 0;
      virtual void GetStatus      (void) = 0;
      virtual void IsRoot         (void) = 0;
      virtual void IssuerDn       (void) = 0;
      virtual void SerialNumber   (void) = 0;
      virtual void StartTime      (void) = 0;
      virtual void SubjectKeyId   (void) = 0;
      virtual void VerifyMe       (void) = 0;
      virtual void X509Version    (void) = 0;
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
