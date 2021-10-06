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
            
               sh(script:"git push origin master") 
            
        }
        failure{
            sh(script:"ls -a")
        }
    }

}