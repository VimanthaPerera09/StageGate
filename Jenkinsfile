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
withCredentials([gitUsernamePassword(credentialsId: 'f53bae07-0ee2-4db9-978e-9386855c72d8', gitToolName: 'Default')]) {
    // some block
}
                //sh('git config --global user.name "VimanthaPerera09"')
                //sh("git remote add origin https://github.com/VimanthaPerera09/StageGate.git")
               sh(script:"git push https://github.com/VimanthaPerera09/StageGate.git master") 
            
        }
        failure{
            sh(script:"ls -a")
        }
    }

}