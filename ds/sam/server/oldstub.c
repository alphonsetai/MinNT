/*++

Copyright (c) 1994  Microsoft Corporation

Module Name:

    oldstub.c

Abstract:

    This file contains functions generated by midl v1.0.  These
    function were designed to only be called by the stubs, but
    these paticular functions are called by user code.  This
    file is needed in order to compile sam with midl v2.0 which
    doesn't generated these paticular functions anymore.

Author:

    Mario Goertzel      (MarioGo)    Jan 10, 1994

Environment:

    User Mode - Win32

Revision History:


--*/

#include <samrpc.h>

/* routine that frees graph for struct _RPC_UNICODE_STRING */
void _fgs__RPC_UNICODE_STRING (RPC_UNICODE_STRING  * _source)
  {
  if (_source->Buffer !=0)
    {
    MIDL_user_free((void  *)(_source->Buffer));
    }
  }

/* routine that frees graph for struct _SAMPR_RID_ENUMERATION */
void _fgs__SAMPR_RID_ENUMERATION (SAMPR_RID_ENUMERATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Name);
  }

/* routine that frees graph for struct _SAMPR_ENUMERATION_BUFFER */
void _fgs__SAMPR_ENUMERATION_BUFFER (SAMPR_ENUMERATION_BUFFER  * _source)
  {
  if (_source->Buffer !=0)
    {
      {
      unsigned long _sym9;
      for (_sym9 = 0; _sym9 < (unsigned long )(0 + _source->EntriesRead); _sym9++)
        {
        _fgs__SAMPR_RID_ENUMERATION ((SAMPR_RID_ENUMERATION *)&_source->Buffer[_sym9]);
        }
      }
    MIDL_user_free((void  *)(_source->Buffer));
    }
  }

/* routine that frees graph for struct _SAMPR_SR_SECURITY_DESCRIPTOR */
void _fgs__SAMPR_SR_SECURITY_DESCRIPTOR (SAMPR_SR_SECURITY_DESCRIPTOR  * _source)
  {
  if (_source->SecurityDescriptor !=0)
    {
    MIDL_user_free((void  *)(_source->SecurityDescriptor));
    }
  }

/* routine that frees graph for struct _SAMPR_GET_GROUPS_BUFFER */
void _fgs__SAMPR_GET_GROUPS_BUFFER (SAMPR_GET_GROUPS_BUFFER  * _source)
  {
  if (_source->Groups !=0)
    {
    MIDL_user_free((void  *)(_source->Groups));
    }
  }

/* routine that frees graph for struct _SAMPR_GET_MEMBERS_BUFFER */
void _fgs__SAMPR_GET_MEMBERS_BUFFER (SAMPR_GET_MEMBERS_BUFFER  * _source)
  {
  if (_source->Members !=0)
    {
    MIDL_user_free((void  *)(_source->Members));
    }
  if (_source->Attributes !=0)
    {
    MIDL_user_free((void  *)(_source->Attributes));
    }
  }

/* routine that frees graph for struct _SAMPR_LOGON_HOURS */
void _fgs__SAMPR_LOGON_HOURS (SAMPR_LOGON_HOURS  * _source)
  {
  if (_source->LogonHours !=0)
    {
    MIDL_user_free((void  *)(_source->LogonHours));
    }
  }

/* routine that frees graph for struct _SAMPR_ULONG_ARRAY */
void _fgs__SAMPR_ULONG_ARRAY (SAMPR_ULONG_ARRAY  * _source)
  {
  if (_source->Element !=0)
    {
    MIDL_user_free((void  *)(_source->Element));
    }
  }

/* routine that frees graph for struct _SAMPR_SID_INFORMATION */
void _fgs__SAMPR_SID_INFORMATION (SAMPR_SID_INFORMATION  * _source)
  {
  if (_source->SidPointer !=0)
    {
    MIDL_user_free((void  *)(_source->SidPointer));
    }
  }

/* routine that frees graph for struct _SAMPR_PSID_ARRAY */
void _fgs__SAMPR_PSID_ARRAY (SAMPR_PSID_ARRAY  * _source)
  {
  if (_source->Sids !=0)
    {
    MIDL_user_free((void  *)(_source->Sids));
    }
  }


/* routine that frees graph for struct _SAMPR_RETURNED_USTRING_ARRAY */
void _fgs__SAMPR_RETURNED_USTRING_ARRAY (SAMPR_RETURNED_USTRING_ARRAY  * _source)
  {
  if (_source->Element !=0)
    {
      {
      unsigned long _sym26;
      for (_sym26 = 0; _sym26 < (unsigned long )(0 + _source->Count); _sym26++)
        {
        _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Element[_sym26]);
        }
      }
    MIDL_user_free((void  *)(_source->Element));
    }
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_GENERAL_INFORMATION */
void _fgs__SAMPR_DOMAIN_GENERAL_INFORMATION (SAMPR_DOMAIN_GENERAL_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->OemInformation);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->DomainName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ReplicaSourceNodeName);
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_GENERAL_INFORMATION2 */
void _fgs__SAMPR_DOMAIN_GENERAL_INFORMATION2 (SAMPR_DOMAIN_GENERAL_INFORMATION2  * _source)
  {
  _fgs__SAMPR_DOMAIN_GENERAL_INFORMATION ((SAMPR_DOMAIN_GENERAL_INFORMATION *)&_source->I1);
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_OEM_INFORMATION */
void _fgs__SAMPR_DOMAIN_OEM_INFORMATION (SAMPR_DOMAIN_OEM_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->OemInformation);
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_NAME_INFORMATION */
void _fgs__SAMPR_DOMAIN_NAME_INFORMATION (SAMPR_DOMAIN_NAME_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->DomainName);
  }

/* routine that frees graph for struct SAMPR_DOMAIN_REPLICATION_INFORMATION */
void _fgs_SAMPR_DOMAIN_REPLICATION_INFORMATION (SAMPR_DOMAIN_REPLICATION_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ReplicaSourceNodeName);
  }

/* routine that frees graph for union _SAMPR_DOMAIN_INFO_BUFFER */
void _fgu__SAMPR_DOMAIN_INFO_BUFFER (SAMPR_DOMAIN_INFO_BUFFER  * _source, DOMAIN_INFORMATION_CLASS _branch)
  {
  switch (_branch)
    {
    case DomainPasswordInformation :
      {
      break;
      }
    case DomainGeneralInformation :
      {
      _fgs__SAMPR_DOMAIN_GENERAL_INFORMATION ((SAMPR_DOMAIN_GENERAL_INFORMATION *)&_source->General);
      break;
      }
    case DomainLogoffInformation :
      {
      break;
      }
    case DomainOemInformation :
      {
      _fgs__SAMPR_DOMAIN_OEM_INFORMATION ((SAMPR_DOMAIN_OEM_INFORMATION *)&_source->Oem);
      break;
      }
    case DomainNameInformation :
      {
      _fgs__SAMPR_DOMAIN_NAME_INFORMATION ((SAMPR_DOMAIN_NAME_INFORMATION *)&_source->Name);
      break;
      }
    case DomainServerRoleInformation :
      {
      break;
      }
    case DomainReplicationInformation :
      {
      _fgs_SAMPR_DOMAIN_REPLICATION_INFORMATION ((SAMPR_DOMAIN_REPLICATION_INFORMATION *)&_source->Replication);
      break;
      }
    case DomainModifiedInformation :
      {
      break;
      }
    case DomainStateInformation :
      {
      break;
      }
    case DomainGeneralInformation2 :
      {
      _fgs__SAMPR_DOMAIN_GENERAL_INFORMATION2 ((SAMPR_DOMAIN_GENERAL_INFORMATION2 *)&_source->General2);
      break;
      }
    case DomainLockoutInformation :
      {
      break;
      }
    case DomainModifiedInformation2 :
      {
      break;
      }
    }
  }

/* routine that frees graph for struct _SAMPR_GROUP_GENERAL_INFORMATION */
void _fgs__SAMPR_GROUP_GENERAL_INFORMATION (SAMPR_GROUP_GENERAL_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Name);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  }

/* routine that frees graph for struct _SAMPR_GROUP_NAME_INFORMATION */
void _fgs__SAMPR_GROUP_NAME_INFORMATION (SAMPR_GROUP_NAME_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Name);
  }

/* routine that frees graph for struct _SAMPR_GROUP_ADM_COMMENT_INFORMATION */
void _fgs__SAMPR_GROUP_ADM_COMMENT_INFORMATION (SAMPR_GROUP_ADM_COMMENT_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  }

/* routine that frees graph for union _SAMPR_GROUP_INFO_BUFFER */
void _fgu__SAMPR_GROUP_INFO_BUFFER (SAMPR_GROUP_INFO_BUFFER  * _source, GROUP_INFORMATION_CLASS _branch)
  {
  switch (_branch)
    {
    case GroupGeneralInformation :
      {
      _fgs__SAMPR_GROUP_GENERAL_INFORMATION ((SAMPR_GROUP_GENERAL_INFORMATION *)&_source->General);
      break;
      }
    case GroupNameInformation :
      {
      _fgs__SAMPR_GROUP_NAME_INFORMATION ((SAMPR_GROUP_NAME_INFORMATION *)&_source->Name);
      break;
      }
    case GroupAttributeInformation :
      {
      break;
      }
    case GroupAdminCommentInformation :
      {
      _fgs__SAMPR_GROUP_ADM_COMMENT_INFORMATION ((SAMPR_GROUP_ADM_COMMENT_INFORMATION *)&_source->AdminComment);
      break;
      }
    }
  }

/* routine that frees graph for struct _SAMPR_ALIAS_GENERAL_INFORMATION */
void _fgs__SAMPR_ALIAS_GENERAL_INFORMATION (SAMPR_ALIAS_GENERAL_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Name);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  }

/* routine that frees graph for struct _SAMPR_ALIAS_NAME_INFORMATION */
void _fgs__SAMPR_ALIAS_NAME_INFORMATION (SAMPR_ALIAS_NAME_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Name);
  }

/* routine that frees graph for struct _SAMPR_ALIAS_ADM_COMMENT_INFORMATION */
void _fgs__SAMPR_ALIAS_ADM_COMMENT_INFORMATION (SAMPR_ALIAS_ADM_COMMENT_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  }

/* routine that frees graph for union _SAMPR_ALIAS_INFO_BUFFER */
void _fgu__SAMPR_ALIAS_INFO_BUFFER (SAMPR_ALIAS_INFO_BUFFER  * _source, ALIAS_INFORMATION_CLASS _branch)
  {
  switch (_branch)
    {
    case AliasGeneralInformation :
      {
      _fgs__SAMPR_ALIAS_GENERAL_INFORMATION ((SAMPR_ALIAS_GENERAL_INFORMATION *)&_source->General);
      break;
      }
    case AliasNameInformation :
      {
      _fgs__SAMPR_ALIAS_NAME_INFORMATION ((SAMPR_ALIAS_NAME_INFORMATION *)&_source->Name);
      break;
      }
    case AliasAdminCommentInformation :
      {
      _fgs__SAMPR_ALIAS_ADM_COMMENT_INFORMATION ((SAMPR_ALIAS_ADM_COMMENT_INFORMATION *)&_source->AdminComment);
      break;
      }
    }
  }

/* routine that frees graph for struct _SAMPR_USER_ALL_INFORMATION */
void _fgs__SAMPR_USER_ALL_INFORMATION (SAMPR_USER_ALL_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->FullName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectory);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectoryDrive);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ScriptPath);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ProfilePath);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->WorkStations);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserComment);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Parameters);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->LmOwfPassword);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->NtOwfPassword);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->PrivateData);
  _fgs__SAMPR_SR_SECURITY_DESCRIPTOR ((SAMPR_SR_SECURITY_DESCRIPTOR *)&_source->SecurityDescriptor);
  _fgs__SAMPR_LOGON_HOURS ((SAMPR_LOGON_HOURS *)&_source->LogonHours);
  }

/* routine that frees graph for struct _SAMPR_USER_INTERNAL3_INFORMATION */
void _fgs__SAMPR_USER_INTERNAL3_INFORMATION (SAMPR_USER_INTERNAL3_INFORMATION  * _source)
  {
  _fgs__SAMPR_USER_ALL_INFORMATION ((SAMPR_USER_ALL_INFORMATION *)&_source->I1);
  }

/* routine that frees graph for struct _SAMPR_USER_GENERAL_INFORMATION */
void _fgs__SAMPR_USER_GENERAL_INFORMATION (SAMPR_USER_GENERAL_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->FullName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserComment);
  }

/* routine that frees graph for struct _SAMPR_USER_PREFERENCES_INFORMATION */
void _fgs__SAMPR_USER_PREFERENCES_INFORMATION (SAMPR_USER_PREFERENCES_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserComment);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Reserved1);
  }

/* routine that frees graph for struct _SAMPR_USER_PARAMETERS_INFORMATION */
void _fgs__SAMPR_USER_PARAMETERS_INFORMATION (SAMPR_USER_PARAMETERS_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Parameters);
  }

/* routine that frees graph for struct _SAMPR_USER_LOGON_INFORMATION */
void _fgs__SAMPR_USER_LOGON_INFORMATION (SAMPR_USER_LOGON_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->FullName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectory);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectoryDrive);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ScriptPath);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ProfilePath);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->WorkStations);
  _fgs__SAMPR_LOGON_HOURS ((SAMPR_LOGON_HOURS *)&_source->LogonHours);
  }

/* routine that frees graph for struct _SAMPR_USER_ACCOUNT_INFORMATION */
void _fgs__SAMPR_USER_ACCOUNT_INFORMATION (SAMPR_USER_ACCOUNT_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->FullName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectory);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectoryDrive);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ScriptPath);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ProfilePath);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->WorkStations);
  _fgs__SAMPR_LOGON_HOURS ((SAMPR_LOGON_HOURS *)&_source->LogonHours);
  }

/* routine that frees graph for struct _SAMPR_USER_A_NAME_INFORMATION */
void _fgs__SAMPR_USER_A_NAME_INFORMATION (SAMPR_USER_A_NAME_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserName);
  }

/* routine that frees graph for struct _SAMPR_USER_F_NAME_INFORMATION */
void _fgs__SAMPR_USER_F_NAME_INFORMATION (SAMPR_USER_F_NAME_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->FullName);
  }

/* routine that frees graph for struct _SAMPR_USER_NAME_INFORMATION */
void _fgs__SAMPR_USER_NAME_INFORMATION (SAMPR_USER_NAME_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->UserName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->FullName);
  }

/* routine that frees graph for struct _SAMPR_USER_HOME_INFORMATION */
void _fgs__SAMPR_USER_HOME_INFORMATION (SAMPR_USER_HOME_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectory);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->HomeDirectoryDrive);
  }

/* routine that frees graph for struct _SAMPR_USER_SCRIPT_INFORMATION */
void _fgs__SAMPR_USER_SCRIPT_INFORMATION (SAMPR_USER_SCRIPT_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ScriptPath);
  }

/* routine that frees graph for struct _SAMPR_USER_PROFILE_INFORMATION */
void _fgs__SAMPR_USER_PROFILE_INFORMATION (SAMPR_USER_PROFILE_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->ProfilePath);
  }

/* routine that frees graph for struct _SAMPR_USER_ADMIN_COMMENT_INFORMATION */
void _fgs__SAMPR_USER_ADMIN_COMMENT_INFORMATION (SAMPR_USER_ADMIN_COMMENT_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  }

/* routine that frees graph for struct _SAMPR_USER_WORKSTATIONS_INFORMATION */
void _fgs__SAMPR_USER_WORKSTATIONS_INFORMATION (SAMPR_USER_WORKSTATIONS_INFORMATION  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->WorkStations);
  }

/* routine that frees graph for struct _SAMPR_USER_LOGON_HOURS_INFORMATION */
void _fgs__SAMPR_USER_LOGON_HOURS_INFORMATION (SAMPR_USER_LOGON_HOURS_INFORMATION  * _source)
  {
  _fgs__SAMPR_LOGON_HOURS ((SAMPR_LOGON_HOURS *)&_source->LogonHours);
  }

/* routine that frees graph for union _SAMPR_USER_INFO_BUFFER */
void _fgu__SAMPR_USER_INFO_BUFFER (SAMPR_USER_INFO_BUFFER  * _source, USER_INFORMATION_CLASS _branch)
  {
  switch (_branch)
    {
    case UserGeneralInformation :
      {
      _fgs__SAMPR_USER_GENERAL_INFORMATION ((SAMPR_USER_GENERAL_INFORMATION *)&_source->General);
      break;
      }
    case UserPreferencesInformation :
      {
      _fgs__SAMPR_USER_PREFERENCES_INFORMATION ((SAMPR_USER_PREFERENCES_INFORMATION *)&_source->Preferences);
      break;
      }
    case UserLogonInformation :
      {
      _fgs__SAMPR_USER_LOGON_INFORMATION ((SAMPR_USER_LOGON_INFORMATION *)&_source->Logon);
      break;
      }
    case UserLogonHoursInformation :
      {
      _fgs__SAMPR_USER_LOGON_HOURS_INFORMATION ((SAMPR_USER_LOGON_HOURS_INFORMATION *)&_source->LogonHours);
      break;
      }
    case UserAccountInformation :
      {
      _fgs__SAMPR_USER_ACCOUNT_INFORMATION ((SAMPR_USER_ACCOUNT_INFORMATION *)&_source->Account);
      break;
      }
    case UserNameInformation :
      {
      _fgs__SAMPR_USER_NAME_INFORMATION ((SAMPR_USER_NAME_INFORMATION *)&_source->Name);
      break;
      }
    case UserAccountNameInformation :
      {
      _fgs__SAMPR_USER_A_NAME_INFORMATION ((SAMPR_USER_A_NAME_INFORMATION *)&_source->AccountName);
      break;
      }
    case UserFullNameInformation :
      {
      _fgs__SAMPR_USER_F_NAME_INFORMATION ((SAMPR_USER_F_NAME_INFORMATION *)&_source->FullName);
      break;
      }
    case UserPrimaryGroupInformation :
      {
      break;
      }
    case UserHomeInformation :
      {
      _fgs__SAMPR_USER_HOME_INFORMATION ((SAMPR_USER_HOME_INFORMATION *)&_source->Home);
      break;
      }
    case UserScriptInformation :
      {
      _fgs__SAMPR_USER_SCRIPT_INFORMATION ((SAMPR_USER_SCRIPT_INFORMATION *)&_source->Script);
      break;
      }
    case UserProfileInformation :
      {
      _fgs__SAMPR_USER_PROFILE_INFORMATION ((SAMPR_USER_PROFILE_INFORMATION *)&_source->Profile);
      break;
      }
    case UserAdminCommentInformation :
      {
      _fgs__SAMPR_USER_ADMIN_COMMENT_INFORMATION ((SAMPR_USER_ADMIN_COMMENT_INFORMATION *)&_source->AdminComment);
      break;
      }
    case UserWorkStationsInformation :
      {
      _fgs__SAMPR_USER_WORKSTATIONS_INFORMATION ((SAMPR_USER_WORKSTATIONS_INFORMATION *)&_source->WorkStations);
      break;
      }
    case UserControlInformation :
      {
      break;
      }
    case UserExpiresInformation :
      {
      break;
      }
    case UserInternal1Information :
      {
      break;
      }
    case UserInternal2Information :
      {
      break;
      }
    case UserParametersInformation :
      {
      _fgs__SAMPR_USER_PARAMETERS_INFORMATION ((SAMPR_USER_PARAMETERS_INFORMATION *)&_source->Parameters);
      break;
      }
    case UserAllInformation :
      {
      _fgs__SAMPR_USER_ALL_INFORMATION ((SAMPR_USER_ALL_INFORMATION *)&_source->All);
      break;
      }
    case UserInternal3Information :
      {
      _fgs__SAMPR_USER_INTERNAL3_INFORMATION ((SAMPR_USER_INTERNAL3_INFORMATION *)&_source->Internal3);
      break;
      }
    }
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_DISPLAY_USER */
void _fgs__SAMPR_DOMAIN_DISPLAY_USER (SAMPR_DOMAIN_DISPLAY_USER  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->LogonName);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->AdminComment);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->FullName);
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_DISPLAY_MACHINE */
void _fgs__SAMPR_DOMAIN_DISPLAY_MACHINE (SAMPR_DOMAIN_DISPLAY_MACHINE  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Machine);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Comment);
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_DISPLAY_GROUP */
void _fgs__SAMPR_DOMAIN_DISPLAY_GROUP (SAMPR_DOMAIN_DISPLAY_GROUP  * _source)
  {
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Group);
  _fgs__RPC_UNICODE_STRING ((RPC_UNICODE_STRING *)&_source->Comment);
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_DISPLAY_USER_BUFFER */
void _fgs__SAMPR_DOMAIN_DISPLAY_USER_BUFFER (SAMPR_DOMAIN_DISPLAY_USER_BUFFER  * _source)
  {
  if (_source->Buffer !=0)
    {
      {
      unsigned long _sym32;
      for (_sym32 = 0; _sym32 < (unsigned long )(0 + _source->EntriesRead); _sym32++)
        {
        _fgs__SAMPR_DOMAIN_DISPLAY_USER ((SAMPR_DOMAIN_DISPLAY_USER *)&_source->Buffer[_sym32]);
        }
      }
    MIDL_user_free((void  *)(_source->Buffer));
    }
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER */
void _fgs__SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER (SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER  * _source)
  {
  if (_source->Buffer !=0)
    {
      {
      unsigned long _sym38;
      for (_sym38 = 0; _sym38 < (unsigned long )(0 + _source->EntriesRead); _sym38++)
        {
        _fgs__SAMPR_DOMAIN_DISPLAY_MACHINE ((SAMPR_DOMAIN_DISPLAY_MACHINE *)&_source->Buffer[_sym38]);
        }
      }
    MIDL_user_free((void  *)(_source->Buffer));
    }
  }

/* routine that frees graph for struct _SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER */
void _fgs__SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER (SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER  * _source)
  {
  if (_source->Buffer !=0)
    {
      {
      unsigned long _sym44;
      for (_sym44 = 0; _sym44 < (unsigned long )(0 + _source->EntriesRead); _sym44++)
        {
        _fgs__SAMPR_DOMAIN_DISPLAY_GROUP ((SAMPR_DOMAIN_DISPLAY_GROUP *)&_source->Buffer[_sym44]);
        }
      }
    MIDL_user_free((void  *)(_source->Buffer));
    }
  }

/* routine that frees graph for union _SAMPR_DISPLAY_INFO_BUFFER */
void _fgu__SAMPR_DISPLAY_INFO_BUFFER (SAMPR_DISPLAY_INFO_BUFFER  * _source, DOMAIN_DISPLAY_INFORMATION _branch)
  {
  switch (_branch)
    {
    case DomainDisplayUser :
      {
      _fgs__SAMPR_DOMAIN_DISPLAY_USER_BUFFER ((SAMPR_DOMAIN_DISPLAY_USER_BUFFER *)&_source->UserInformation);
      break;
      }
    case DomainDisplayMachine :
      {
      _fgs__SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER ((SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER *)&_source->MachineInformation);
      break;
      }
    case DomainDisplayGroup :
      {
      _fgs__SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER ((SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER *)&_source->GroupInformation);
      break;
      }
    }
  }

