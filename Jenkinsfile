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
            
               sh(script:"git push https://github.com/VimanthaPerera09/StageGate.git") 
            
        }
        failure{
            sh(script:"ls -a")
        }
    }

}