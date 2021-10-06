pipeline {
    agent any
        environment {
        USERNAME = 'VimanthaPerea09'
        PASSWORD = 'July@199607v@'
    }
    stages {
        stage("Build") {
            steps{
            sh(script:"make main")
            sh(script:"./main")
        }
    }
    }
    post{
        success{
withCredentials([gitUsernamePassword(credentialsId: 'c7ac7136-5405-409e-9c53-46dbbb6cf56b', gitToolName: 'Default')]) {
    // some block
}
                //sh("git checkout master")
                //sh("git remote add origin https://github.com/VimanthaPerera09/StageGate.git")
               sh(script:"git push https://${USERNAME}github.com/VimanthaPerera09/StageGate.git master") 
            
        }
        failure{
            sh(script:"ls -a")
        }
    }

}