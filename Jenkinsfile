pipeline {
    agent any
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
            withCredentials([gitUsernamePassword(credentialsId: 'c263861b-673e-442e-9628-5b47eeb5396a', gitToolName: 'Default')]) {
    // some block
}
                //sh("git checkout master")
               sh(script:"git push https://github.com/VimanthaPerera09/StageGate.git master") 
            
        }
        failure{
            sh(script:"ls -a")
        }
    }

}