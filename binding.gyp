{

  'targets': [
    {
      'target_name': 'sign',
      'sources': [ 'sign.cc' ],
      "libraries": [ "-lssl", "-lcrypto"],

    }
  ]


}