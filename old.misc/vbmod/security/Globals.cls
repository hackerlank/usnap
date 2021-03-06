VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "Globals"
Attribute VB_GlobalNameSpace = True
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

Public Function ConnectPKIRegistry(ByVal ClientKey As String) As PKIRegistry
    Set ConnectPKIRegistry = GlobalsSingleton.ConnectPKIRegistry(ClientKey)
End Function

Public Property Get Secret(Optional ByVal MinLen As String = 4, _
                           Optional ByVal MaxLen As String = 30) As String
    Secret = GlobalsSingleton.Secret(MinLen, MaxLen)
End Property

Public Sub SecretRandomize(Optional Number)
    If IsMissing(Number) Then
        Randomize
    Else
        Randomize Number
    End If
End Sub
